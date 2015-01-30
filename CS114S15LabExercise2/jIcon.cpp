#include "jIcon.h"

int jIcon::getx(){
	return x;
}

int jIcon::gety(){
	return y;
}

void jIcon::setx(int newX){
	x = newX;
	return;
}

void jIcon::sety(int newY){
	y = newY;
	return;
}

void jIcon::drawJared(Graphics^ g, Bitmap^ jared, int x, int y){
	g->DrawImage(jared, x, y);
	return;
}

void jIcon::hideJared(System::Windows::Forms::Panel^ jaredPanel){
	jaredPanel->Refresh();
	return;
}