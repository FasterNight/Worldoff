#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "Interface.h"

class Player : public Alive, public Entity,public AMovable,public IAttacker
{
public:
	Player(float, float, float, float, Vector2, float);
	virtual void TakeDamage(float) override;
	virtual void Move() override;
	virtual void Attack(Alive*) override;



private:

};

