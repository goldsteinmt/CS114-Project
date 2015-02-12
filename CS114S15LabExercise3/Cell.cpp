#include "Cell.h"

Cell::Cell(int newx, int newy, System::Char newImgChar){
	setX(newx);
	setY(newy);
	setImage(newImgChar);
}
int Cell::getX(){
	return x;
}
int Cell::getY(){
	return y;
}
void Cell::setX(int newX){
	x = newX;
	return;
}
void Cell::setY(int newY){
	y = newY;
	return;
}
void Cell::setImage(System::Char newImgChar){
	imgChar = newImgChar;
	System::Drawing::Image^ img1 = System::Drawing::Image::FromFile(blankImg);
	System::Drawing::Image^ img2 = System::Drawing::Image::FromFile(xImg);
	System::Drawing::Image^ img3 = System::Drawing::Image::FromFile(oImg);
	switch (newImgChar){
	case '-':
		image = gcnew System::Drawing::Bitmap(img1, 100, 100);
		break;
	case 'X':
		image = gcnew System::Drawing::Bitmap(img2, 100, 100);
		break;
	case 'O':
		image = gcnew System::Drawing::Bitmap(img3, 100, 100);
		break;
	}
}
System::Char Cell::getImageChar(){
	return imgChar;
}
void Cell::display(System::Drawing::Graphics^ g){
	g->DrawImage(image, x, y);
}