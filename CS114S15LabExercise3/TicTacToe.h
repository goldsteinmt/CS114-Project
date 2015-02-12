#pragma once
#include "Cell.h"

namespace CS114S15LabExercise3 {

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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnTopLeft;
	private: System::Windows::Forms::Button^  btnTopMid;
	private: System::Windows::Forms::Button^  btnTopRight;
	private: System::Windows::Forms::Button^  btnMidLeft;
	private: System::Windows::Forms::Button^  btnMidMid;
	private: System::Windows::Forms::Button^  btnMidRight;
	private: System::Windows::Forms::Button^  btnBotLeft;
	private: System::Windows::Forms::Button^  btnBotMid;
	private: System::Windows::Forms::Button^  btnBotRight;
	private: System::Windows::Forms::Label^  lMessage;
	private: System::Windows::Forms::Button^  btnNewGame;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnTopLeft = (gcnew System::Windows::Forms::Button());
			this->btnTopMid = (gcnew System::Windows::Forms::Button());
			this->btnTopRight = (gcnew System::Windows::Forms::Button());
			this->btnMidLeft = (gcnew System::Windows::Forms::Button());
			this->btnMidMid = (gcnew System::Windows::Forms::Button());
			this->btnMidRight = (gcnew System::Windows::Forms::Button());
			this->btnBotLeft = (gcnew System::Windows::Forms::Button());
			this->btnBotMid = (gcnew System::Windows::Forms::Button());
			this->btnBotRight = (gcnew System::Windows::Forms::Button());
			this->lMessage = (gcnew System::Windows::Forms::Label());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(40, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(450, 450);
			this->panel1->TabIndex = 0;
			// 
			// btnTopLeft
			// 
			this->btnTopLeft->Enabled = false;
			this->btnTopLeft->Location = System::Drawing::Point(127, 549);
			this->btnTopLeft->Name = L"btnTopLeft";
			this->btnTopLeft->Size = System::Drawing::Size(75, 75);
			this->btnTopLeft->TabIndex = 1;
			this->btnTopLeft->UseVisualStyleBackColor = true;
			this->btnTopLeft->Click += gcnew System::EventHandler(this, &MyForm::btnTopLeft_Click);
			// 
			// btnTopMid
			// 
			this->btnTopMid->Enabled = false;
			this->btnTopMid->Location = System::Drawing::Point(224, 549);
			this->btnTopMid->Name = L"btnTopMid";
			this->btnTopMid->Size = System::Drawing::Size(75, 75);
			this->btnTopMid->TabIndex = 2;
			this->btnTopMid->UseVisualStyleBackColor = true;
			this->btnTopMid->Click += gcnew System::EventHandler(this, &MyForm::btnTopMid_Click);
			// 
			// btnTopRight
			// 
			this->btnTopRight->Enabled = false;
			this->btnTopRight->Location = System::Drawing::Point(318, 549);
			this->btnTopRight->Name = L"btnTopRight";
			this->btnTopRight->Size = System::Drawing::Size(75, 75);
			this->btnTopRight->TabIndex = 3;
			this->btnTopRight->UseVisualStyleBackColor = true;
			this->btnTopRight->Click += gcnew System::EventHandler(this, &MyForm::btnTopRight_Click);
			// 
			// btnMidLeft
			// 
			this->btnMidLeft->Enabled = false;
			this->btnMidLeft->Location = System::Drawing::Point(127, 629);
			this->btnMidLeft->Name = L"btnMidLeft";
			this->btnMidLeft->Size = System::Drawing::Size(75, 75);
			this->btnMidLeft->TabIndex = 6;
			this->btnMidLeft->UseVisualStyleBackColor = true;
			this->btnMidLeft->Click += gcnew System::EventHandler(this, &MyForm::btnMidLeft_Click);
			// 
			// btnMidMid
			// 
			this->btnMidMid->Enabled = false;
			this->btnMidMid->Location = System::Drawing::Point(224, 629);
			this->btnMidMid->Name = L"btnMidMid";
			this->btnMidMid->Size = System::Drawing::Size(75, 75);
			this->btnMidMid->TabIndex = 5;
			this->btnMidMid->UseVisualStyleBackColor = true;
			this->btnMidMid->Click += gcnew System::EventHandler(this, &MyForm::btnMidMid_Click);
			// 
			// btnMidRight
			// 
			this->btnMidRight->Enabled = false;
			this->btnMidRight->Location = System::Drawing::Point(318, 630);
			this->btnMidRight->Name = L"btnMidRight";
			this->btnMidRight->Size = System::Drawing::Size(75, 75);
			this->btnMidRight->TabIndex = 4;
			this->btnMidRight->UseVisualStyleBackColor = true;
			this->btnMidRight->Click += gcnew System::EventHandler(this, &MyForm::btnMidRight_Click);
			// 
			// btnBotLeft
			// 
			this->btnBotLeft->Enabled = false;
			this->btnBotLeft->Location = System::Drawing::Point(127, 710);
			this->btnBotLeft->Name = L"btnBotLeft";
			this->btnBotLeft->Size = System::Drawing::Size(75, 75);
			this->btnBotLeft->TabIndex = 9;
			this->btnBotLeft->UseVisualStyleBackColor = true;
			this->btnBotLeft->Click += gcnew System::EventHandler(this, &MyForm::btnBotLeft_Click);
			// 
			// btnBotMid
			// 
			this->btnBotMid->Enabled = false;
			this->btnBotMid->Location = System::Drawing::Point(224, 710);
			this->btnBotMid->Name = L"btnBotMid";
			this->btnBotMid->Size = System::Drawing::Size(75, 75);
			this->btnBotMid->TabIndex = 8;
			this->btnBotMid->UseVisualStyleBackColor = true;
			this->btnBotMid->Click += gcnew System::EventHandler(this, &MyForm::btnBotMid_Click);
			// 
			// btnBotRight
			// 
			this->btnBotRight->Enabled = false;
			this->btnBotRight->Location = System::Drawing::Point(318, 710);
			this->btnBotRight->Name = L"btnBotRight";
			this->btnBotRight->Size = System::Drawing::Size(75, 75);
			this->btnBotRight->TabIndex = 7;
			this->btnBotRight->UseVisualStyleBackColor = true;
			this->btnBotRight->Click += gcnew System::EventHandler(this, &MyForm::btnBotRight_Click);
			// 
			// lMessage
			// 
			this->lMessage->AutoSize = true;
			this->lMessage->ForeColor = System::Drawing::Color::Red;
			this->lMessage->Location = System::Drawing::Point(101, 805);
			this->lMessage->Name = L"lMessage";
			this->lMessage->Size = System::Drawing::Size(0, 20);
			this->lMessage->TabIndex = 10;
			this->lMessage->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btnNewGame
			// 
			this->btnNewGame->Location = System::Drawing::Point(127, 835);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(266, 34);
			this->btnNewGame->TabIndex = 11;
			this->btnNewGame->Text = L"New Game";
			this->btnNewGame->UseVisualStyleBackColor = true;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 881);
			this->Controls->Add(this->btnNewGame);
			this->Controls->Add(this->lMessage);
			this->Controls->Add(this->btnBotLeft);
			this->Controls->Add(this->btnBotMid);
			this->Controls->Add(this->btnBotRight);
			this->Controls->Add(this->btnMidLeft);
			this->Controls->Add(this->btnMidMid);
			this->Controls->Add(this->btnMidRight);
			this->Controls->Add(this->btnTopRight);
			this->Controls->Add(this->btnTopMid);
			this->Controls->Add(this->btnTopLeft);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		array <Cell^, 2>^ cells;
		Graphics^ g;
		System::Char currentPlayer;
		bool buttonsClickable = false;

		public: System::Void displayCells(){
			panel1->Refresh();
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					cells[i, j]->display(g);
				}
			}

			return;
		}
		public: System::Void setButtonClickable(){
			btnTopLeft->Enabled = buttonsClickable;
			btnTopMid->Enabled = buttonsClickable;
			btnTopRight->Enabled = buttonsClickable;
			btnMidLeft->Enabled = buttonsClickable;
			btnMidMid->Enabled = buttonsClickable;
			btnMidRight->Enabled = buttonsClickable;
			btnBotLeft->Enabled = buttonsClickable;
			btnBotMid->Enabled = buttonsClickable;
			btnBotRight->Enabled = buttonsClickable;

			return;
		}
		public: System::Void onWin(System::Char winner){
			buttonsClickable = false;
			setButtonClickable();

			lMessage->Text = "Player " + winner + " wins!";
			return;
		}

		public: System::Char checkWin(){
			System::Char item1, item2, item3;
			// check row 1
			item1 = cells[0, 0]->getImageChar();
			item2 = cells[0, 1]->getImageChar();
			item3 = cells[0, 2]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check row 2
			item1 = cells[1, 0]->getImageChar();
			item2 = cells[1, 1]->getImageChar();
			item3 = cells[1, 2]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check row 3
			item1 = cells[2, 0]->getImageChar();
			item2 = cells[2, 1]->getImageChar();
			item3 = cells[2, 2]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check column 1
			item1 = cells[0, 0]->getImageChar();
			item2 = cells[1, 0]->getImageChar();
			item3 = cells[2, 0]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check column 2
			item1 = cells[0, 1]->getImageChar();
			item2 = cells[1, 1]->getImageChar();
			item3 = cells[2, 1]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check column 3
			item1 = cells[0, 2]->getImageChar();
			item2 = cells[1, 2]->getImageChar();
			item3 = cells[2, 2]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check diagonal top left to bottom right
			item1 = cells[0, 0]->getImageChar();
			item2 = cells[1, 1]->getImageChar();
			item3 = cells[2, 2]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			// check diagonal top right to bottom left
			item1 = cells[0, 2]->getImageChar();
			item2 = cells[1, 1]->getImageChar();
			item3 = cells[2, 0]->getImageChar();
			if ((item1 == item2) && (item1 == item3) && (item2 == item3)){
				return item1;
			}

			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					if (cells[i, j]->getImageChar() == '-'){
						return '-';
					}
				}
			}


			return '0';
		}

		public: void changeCurrPlayer(){
			if (currentPlayer == 'X')
				currentPlayer = 'O';
			else
				currentPlayer = 'X';
			
			return;
		}

		public: void buttonClicked(int btnClicked, System::Char currPlayer){
			int i, j;
			switch (btnClicked){
			case 0: 
				i = 0;
				j = 0;
				break;
			case 1:
				i = 0;
				j = 1;
				break;
			case 2: 
				i = 0;
				j = 2;
				break;
			case 3: 
				i = 1;
				j = 0;
				break;
			case 4: 
				i = 1;
				j = 1;
				break;
			case 5: 
				i = 1;
				j = 2;
				break;
			case 6:
				i = 2;
				j = 0;
				break;
			case 7:
				i = 2;
				j = 1;
				break;
			case 8: 
				i = 2;
				j = 2;
				break;
			}

			cells[i, j]->setImage(currPlayer);
			System::Char winner = checkWin();

			if (winner == 'X'){
				onWin('X');
			}
			else if (winner == 'O'){
				onWin('O');
			}
			else if (winner == '0'){
				lMessage->Text = "The game is a Tie!";
			}
			else{
				changeCurrPlayer();
				lMessage->Text = "Player " + currentPlayer + "'s turn!";
			}

			displayCells();
			return;

		}

		public: System::Void repopulateArray(){
			int tempx, tempy;
			for (int i = 0; i < 3; i++){
				for (int j = 0; j < 3; j++){
					if (i == 0)
						tempy = 0;
					else if (i == 1)
						tempy = 100;
					else
						tempy = 200;
					if (j == 0)
						tempx = 0;
					else if (j == 1)
						tempx = 100;
					else
						tempx = 200;
					cells[i, j] = gcnew Cell(tempx, tempy, '-');
				}
			}

			return;
		}
	public: System::Void newGame(){
		currentPlayer = 'X';
		repopulateArray();
		displayCells();
		
		lMessage->Text = "Player " + currentPlayer + "'s turn!";

		buttonsClickable = true;
		setButtonClickable();
		
		return;
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = panel1->CreateGraphics();
		cells = gcnew array<Cell^, 2>(3, 3);
		repopulateArray();
		displayCells();

		setButtonClickable();

	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnNewGame_Click(System::Object^  sender, System::EventArgs^  e) {
	newGame();
}
private: System::Void btnTopLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	btnTopLeft->Enabled = false;
	buttonClicked(0, currentPlayer);
}
private: System::Void btnTopMid_Click(System::Object^  sender, System::EventArgs^  e) {
	btnTopMid->Enabled = false;
	buttonClicked(1, currentPlayer);
}
private: System::Void btnTopRight_Click(System::Object^  sender, System::EventArgs^  e) {
	btnTopRight->Enabled = false;
	buttonClicked(2, currentPlayer);
}
private: System::Void btnMidLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	btnMidLeft->Enabled = false;
	buttonClicked(3, currentPlayer);
}
private: System::Void btnMidMid_Click(System::Object^  sender, System::EventArgs^  e) {
	btnMidMid->Enabled = false;
	buttonClicked(4, currentPlayer);
}
private: System::Void btnMidRight_Click(System::Object^  sender, System::EventArgs^  e) {
	btnMidRight->Enabled = false;
	buttonClicked(5, currentPlayer);
}
private: System::Void btnBotLeft_Click(System::Object^  sender, System::EventArgs^  e) {
	btnBotLeft->Enabled = false;
	buttonClicked(6, currentPlayer);
}
private: System::Void btnBotMid_Click(System::Object^  sender, System::EventArgs^  e) {
	btnBotMid->Enabled = false;
	buttonClicked(7, currentPlayer);
}
private: System::Void btnBotRight_Click(System::Object^  sender, System::EventArgs^  e) {
	btnBotRight->Enabled = false;
	buttonClicked(8, currentPlayer);
}
};
}
