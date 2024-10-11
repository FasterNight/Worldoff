#include"AMovable.h"

AMovable::AMovable(Vector2 _direction, float _speed) : direction(_direction), speed(_speed)  {

}


void AMovable::SetDirection(Vector2 _direction) {
	direction = _direction;
}

void AMovable::SetSpeed(float _speed) {
	speed = _speed;
}

float AMovable::GetSpeed() {
	return speed;
}


