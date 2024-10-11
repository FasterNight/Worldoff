#include "Vector2.h"
#include <iostream>
#include <sstream>
Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {

}

float Vector2::GetX() const{
	return x;
}

float Vector2::GetY() const {
	return y;
}

void Vector2::Set(float _x, float _y) {
	x = _x;
	y = _y;
}

void Vector2::SetX(std::string _xStr) {
	x = std::stof(_xStr);
}

void Vector2::Norm() {
	float distance = sqrt(pow(x, 2) + pow(y, 2));
	this->x /= distance;
	this->y /= distance;
}

