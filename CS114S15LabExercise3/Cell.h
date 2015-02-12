#pragma once

ref class Cell {
private:
	System::String^ blankImg = "Images/imgBlank.png";
	System::String^ xImg = "Images/imgX.png";
	System::String^ oImg = "Images/imgO.png";
	System::Drawing::Bitmap^ image;
	System::Char imgChar = '-';
	int x, y;
	//Cell();
public:
	Cell(int, int, System::Char);
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	void setImage(System::Char);
	System::Char getImageChar();
	void display(System::Drawing::Graphics^);
};