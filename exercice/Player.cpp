#include <iostream>
#include "Player.h"

Player::Player(float _x, float _y, float _MaxHealt, float _CurrentHealt, Vector2 _direction, float _speed) : Entity(_x, _y), Alive(_MaxHealt, _CurrentHealt), AMovable(_direction, _speed) {
	std::cout << "Player just created at x = " << position.GetX() << " and y = " << position.GetY() << " with " << MaxHealt << " with direction x = " << direction.GetX() << " and y = " << direction.GetY() << std::endl;
}

void Player::TakeDamage(float _dmg) {
	Alive::TakeDamage(_dmg);
	if (CurrentHealt <= 0) {
		std::cout << "Player just die" << std::endl;
	}
}

void Player::Move() {

	SetPosition(Vector2(position.GetX() + (direction.GetX() * speed), position.GetY() + (direction.GetY() * speed)));

	std::cout << "Player move to x = " << position.GetX() << "and y = " << position.GetY() << std::endl;
}

void Player::Attack(Alive* target) {
	target->TakeDamage(50);
	std::cout << "Player just attacked." << std::endl;
}