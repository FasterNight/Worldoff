#include"Mob.h"
#include<iostream>

Mob::Mob(float _x, float _y, float _MaxHealt, float _CurrentHealt, Vector2 _direction, float _speed) : Entity(_x, _y), Alive(_MaxHealt, _CurrentHealt), AMovable(_direction, _speed) {
	std::cout << "Mob just created at x = " << position.GetX() << " and y = " << position.GetY() << " with " << MaxHealt << " with direction x = " << direction.GetX() << " and y = " << direction.GetY() << std::endl;
}

void Mob::TakeDamage(float _dmg){
	Alive::TakeDamage(_dmg);
	if (CurrentHealt <= 0) {
		std::cout << "Mob just die" << std::endl;
	}
}

void Mob::Move() {
	SetPosition(Vector2(position.GetX() + (direction.GetX() * speed), position.GetY() + (direction.GetY() * speed)));

	std::cout << "Mob move to x = " << position.GetX() << "and y = " << position.GetY() << std::endl;
}
