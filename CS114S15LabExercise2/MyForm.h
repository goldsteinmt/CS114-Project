#pragma once
#include "jIcon.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  showHideJared;
	private: System::Windows::Forms::Panel^  jaredPanel;
	private: System::Windows::Forms::Button^  btnLeft;
	private: System::Windows::Forms::Button^  btnDown;
	private: System::Windows::Forms::Button^  btnUp;
	private: System::Windows::Forms::Button^  btnRight;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->showHideJared = (gcnew System::Windows::Forms::Button());
			this->jaredPanel = (gcnew System::Windows::Forms::Panel());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// showHideJared
			// 
			this->showHideJared->Location = System::Drawing::Point(103, 238);
			this->showHideJared->Name = L"showHideJared";
			this->showHideJared->Size = System::Drawing::Size(75, 23);
			this->showHideJared->TabIndex = 1;
			this->showHideJared->Text = L"Show Jared";
			this->showHideJared->UseVisualStyleBackColor = true;
			this->showHideJared->Click += gcnew System::EventHandler(this, &MyForm::showHideJared_Click);
			// 
			// jaredPanel
			// 
			this->jaredPanel->Location = System::Drawing::Point(13, 13);
			this->jaredPanel->Name = L"jaredPanel";
			this->jaredPanel->Size = System::Drawing::Size(253, 219);
			this->jaredPanel->TabIndex = 2;
			// 
			// btnLeft
			// 
			this->btnLeft->Location = System::Drawing::Point(60, 299);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(75, 23);
			this->btnLeft->TabIndex = 3;
			this->btnLeft->Text = L"Left";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Click += gcnew System::EventHandler(this, &MyForm::btnLeft_Click);
			// 
			// btnDown
			// 
			this->btnDown->Location = System::Drawing::Point(103, 328);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(75, 23);
			this->btnDown->TabIndex = 4;
			this->btnDown->Text = L"Down";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &MyForm::btnDown_Click);
			// 
			// btnUp
			// 
			this->btnUp->Location = System::Drawing::Point(103, 270);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(75, 23);
			this->btnUp->TabIndex = 5;
			this->btnUp->Text = L"Up";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &MyForm::btnUp_Click);
			// 
			// btnRight
			// 
			this->btnRight->Location = System::Drawing::Point(141, 299);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(75, 23);
			this->btnRight->TabIndex = 6;
			this->btnRight->Text = L"Right";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &MyForm::btnRight_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 369);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->btnDown);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->jaredPanel);
			this->Controls->Add(this->showHideJared);
			this->Name = L"MyForm";
			this->Text = L"Jared";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ g;
		Bitmap^ jared = gcnew Bitmap("Jared.bmp");
		bool vis;
		jIcon iconJared;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = jaredPanel->CreateGraphics();
		vis = false;
	}
	private: System::Void showHideJared_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!vis){
			showHideJared->Text = "Hide Jared";
			iconJared.drawJared(g, jared, iconJared.getx(), iconJared.gety());
			vis = true;
		}
		else{
			showHideJared->Text = "Show Jared";
			iconJared.hideJared(jaredPanel);
			vis = false;
		}
	}
	private: System::Void btnUp_Click(System::Object^  sender, System::EventArgs^  e) {
		iconJared.sety(iconJared.gety() - 20);
		iconJared.hideJared(jaredPanel);
		iconJared.drawJared(g, jared, iconJared.getx(), iconJared.gety());
		vis = true;
		showHideJared->Text = "Hide Jared";
	}
private: System::Void btnLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	iconJared.setx(iconJared.getx() - 20);
	iconJared.hideJared(jaredPanel);
	iconJared.drawJared(g, jared, iconJared.getx(), iconJared.gety());
	vis = true;
	showHideJared->Text = "Hide Jared";
}
private: System::Void btnRight_Click(System::Object^  sender, System::EventArgs^  e) {
	iconJared.setx(iconJared.getx() + 20);
	iconJared.hideJared(jaredPanel);
	iconJared.drawJared(g, jared, iconJared.getx(), iconJared.gety());
	vis = true;
	showHideJared->Text = "Hide Jared";
}
private: System::Void btnDown_Click(System::Object^  sender, System::EventArgs^  e) {
	iconJared.sety(iconJared.gety() + 20);
	iconJared.hideJared(jaredPanel);
	iconJared.drawJared(g, jared, iconJared.getx(), iconJared.gety());
	vis = true;
	showHideJared->Text = "Hide Jared";
}
};
}
