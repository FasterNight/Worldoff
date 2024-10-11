#pragma once
#include <iostream>
#include <vector>
#include "Entity.h"


class World
{

protected:


public:
	std::vector<Entity*> entities;

	void Init();

	void Step();

private:

};

