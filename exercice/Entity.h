#pragma once
#include "Vector2.h"


class Entity
{

protected:
	Vector2 position;

public:
	Entity(float, float);

	virtual Vector2 GetPosition();
	virtual void SetPosition(Vector2);
};

