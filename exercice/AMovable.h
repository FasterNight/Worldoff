#pragma once
#include "Vector2.h"

class AMovable
{

protected:
	Vector2 direction;
	float speed;


public:
	AMovable(Vector2, float);

	virtual void SetDirection(Vector2);
	virtual void SetSpeed(float);
	virtual void Move() = 0;
	virtual float GetSpeed();
	

};