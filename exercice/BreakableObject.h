#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject: public Entity, public Alive
{


public:
	BreakableObject(float,float,float,float);
	virtual void TakeDamage(float) override;


private:

};

