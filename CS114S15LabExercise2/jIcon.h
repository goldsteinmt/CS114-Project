#pragma once

using namespace System::Drawing;

ref class jIcon{
private:
	int x = 0, y = 0; // location of image x and location of image y
public:
	void setx(int newX);
	void sety(int newY);
	int getx();
	int gety();
	void drawJared(Graphics^ g, Bitmap^ jared, int x, int y);
	void hideJared(System::Windows::Forms::Panel^ jaredPanel);
};