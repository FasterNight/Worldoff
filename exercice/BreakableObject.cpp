#include"BreakableObject.h"
#include<iostream>

BreakableObject::BreakableObject(float _x, float _y, float _MaxHealt, float _CurrentHealt) : Entity(_x, _y), Alive(_MaxHealt, _CurrentHealt) {
	std::cout << "Breakable Object just created at x = " << position.GetX() << " and y = " << position.GetY() << " with " << MaxHealt << std::endl;
}

void BreakableObject::TakeDamage(float _dmg){
	Alive::TakeDamage(_dmg);
	if (CurrentHealt <= 0) {
		std::cout << "Breakable Object just broke" << std::endl;
	}
}


