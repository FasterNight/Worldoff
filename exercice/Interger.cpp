#include"Interger.h"
#include<iostream>

Interger::Interger(int _x) : x(_x) {

}


int Interger::GetX() const {
	return x;
}



void Interger::Set(int _x) {
	x = _x;
	
}

Interger Interger::operator+(const Interger& _right) {
	Interger Int(x + _right.GetX());
	return Int;
}

Interger Interger::operator+=(const Interger& _right) {
	Interger Int(x += _right.GetX());
	return Int;
}

Interger Interger::operator-(const Interger& _right) {
	Interger Int(x - _right.GetX());
	return Int;
}

Interger Interger::operator*(const Interger& _right) {
	Interger Int(x * _right.GetX());
	return Int;
}

Interger Interger::operator/(const Interger& _right) {
	Interger Int(x / _right.GetX());
	return Int;
}

Interger Interger::operator%(const Interger& _right) {
	Interger Int(x % _right.GetX());
	return Int;
}

Interger Interger::operator-=(const Interger& _right) {
	Interger Int(x -= _right.GetX());
	return Int;
}

Interger Interger::operator*=(const Interger& _right) {
	Interger Int(x *= _right.GetX());
	return Int;
}

Interger Interger::operator/=(const Interger& _right) {
	Interger Int(x /= _right.GetX());
	return Int;
}

Interger Interger::operator%=(const Interger& _right) {
	Interger Int(x %= _right.GetX());
	return Int;
}

std::ostream& operator<<(std::ostream& os, const Interger& _right)
{
	os << _right.GetX();
	return os;
}
