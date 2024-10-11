#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float,float,float,float,Vector2,float);
	virtual void TakeDamage(float) override;
	virtual void Move() override;


private:

};

