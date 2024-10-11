#pragma once
#include"Alive.h"

class IAttacker
{

public:
	virtual void Attack(Alive*) = 0;

private:

};
