#pragma once

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
	private: System::Windows::Forms::Button^  btnJared;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->btnJared = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnJared
			// 
			this->btnJared->Location = System::Drawing::Point(103, 135);
			this->btnJared->Name = L"btnJared";
			this->btnJared->Size = System::Drawing::Size(100, 31);
			this->btnJared->TabIndex = 0;
			this->btnJared->Text = L"Show Jared";
			this->btnJared->UseVisualStyleBackColor = true;
			this->btnJared->Click += gcnew System::EventHandler(this, &MyForm::btnJared_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(103, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 100);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(305, 178);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnJared);
			this->Name = L"MyForm";
			this->Text = L"Show Jared";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Bitmap^ jared = gcnew Bitmap("Jared.bmp");
		Graphics^ g;
		bool vis;
	private: System::Void btnJared_Click(System::Object^  sender, System::EventArgs^  e) {
		vis = !vis;
		if (vis){
			g->DrawImage(jared, 0, 0);
			btnJared->Text = "Hide Jared";
		}
		else{
			g->Clear(Color::White);
			btnJared->Text = "Show Jared";
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();
		vis = false;
	}
	};
}