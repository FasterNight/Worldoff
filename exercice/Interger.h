#pragma once
#include<iostream>

class Interger
{

protected:
	int x;

public:
	Interger(int _x);

	int GetX() const;
	void Set(int);

	Interger operator+(const Interger& _right);
	Interger operator+=(const Interger& _right);
	Interger operator-(const Interger& _right);
	Interger operator-=(const Interger& _right);
	Interger operator*(const Interger& _right);
	Interger operator*=(const Interger& _right);
	Interger operator/(const Interger& _right);
	Interger operator/=(const Interger& _right);
	Interger operator%(const Interger& _right);
	Interger operator%=(const Interger& _right);
	std::ostream operator<<(const Interger& _right);

};

