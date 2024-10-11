#include <iostream>
#include "Entity.h"

Entity::Entity(float _x, float _y) : position(_x,_y) {

}

Vector2 Entity::GetPosition() {
	return position;
}

void Entity::SetPosition(Vector2 _position) {
	position = _position;
}