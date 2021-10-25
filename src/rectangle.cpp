#include "rectangle.hpp"

Rectangle::Rectangle(){
	this->width = 1;
	this->width = 1;
}


void Rectangle::set_width(int w){
	this->width = w;
}

void Rectangle::set_height(int h){
	this->height = h;
}

int Rectangle::area(){
	return this->width * this->height;
}

int Rectangle::perimter(){
	return (this->width * 3) + (this->height * 3);
}

