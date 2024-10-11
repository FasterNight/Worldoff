#include <iostream>
#include <vector>
#include "World.h"
#include "Vector2.h"
#include "Interger.h"
#include "Entity.h"
#include "StaticObject.h"
#include "mob.h"
#include "Player.h"
#include "BreakableObject.h"
#include "Interface.h"
#include "Alive.h"
#include "AMovable.h"

void World::Init() {

	StaticObject* caise1 = new StaticObject(5, 5);
	BreakableObject* caise2 = new BreakableObject(6, 6, 1, 1);
	Mob* zombie = new Mob(7, 7, 20, 20, Vector2(4, 4), 1);
	Player* nono = new Player(8, 8, 10, 10, Vector2(2, 2), 2);

	entities.push_back(caise2);
	entities.push_back(caise1);
	entities.push_back(zombie);
	entities.push_back(nono);

	
}

void World::Step() {

	bool MobAlive = true;
	bool BreakO = true;

	for (size_t i = 0; i < entities.size(); i++)
	{
		Mob* _zombie = dynamic_cast<Mob*>(entities[i]);
		BreakableObject* _caise2 = dynamic_cast<BreakableObject*>(entities[i]);
		StaticObject* _caise1 = dynamic_cast<StaticObject*>(entities[i]);
		Player* _nono = dynamic_cast<Player*>(entities[i]);

		if (_zombie) {
			for (size_t i = 0; i < entities.size(); i++)
			{
				BreakableObject* _caise2 = dynamic_cast<BreakableObject*>(entities[i]);
				if (_caise2) {
					float dx = _caise2->GetPosition().GetX() - _zombie->GetPosition().GetX();
					float dy = _caise2->GetPosition().GetY() - _zombie->GetPosition().GetY();
					Vector2 dist(dx, dy);
					dist.Norm();

					_zombie->SetDirection(dist);
					_zombie->Move(); //_zombie->SetPosition(Vector2(_zombie->GetPosition().GetX() + (dist.GetX() * _zombie->GetSpeed()), _zombie->GetPosition().GetY() + (dist.GetY() * _zombie->GetSpeed())));
				}
				
			}
			}
			


		if (_nono) {
			for (size_t i = 0; i < entities.size(); i++)
			{
				Mob* _zombie = dynamic_cast<Mob*>(entities[i]);
				if (_zombie != 0 and _zombie->GetCurrentHealt() != 0) {

					for (size_t i = 0; i < entities.size(); i++)
					{
						float dx = _zombie->GetPosition().GetX() - _nono->GetPosition().GetX();
						float dy = _zombie->GetPosition().GetY() - _nono->GetPosition().GetY();
						Vector2 dist(dx, dy);
						dist.Norm();

						_nono->SetDirection(dist);
						_nono->Move(); //_nono->SetPosition(Vector2(_nono->GetPosition().GetX() + (dist.GetX() * _nono->GetSpeed()), _nono->GetPosition().GetY() + (dist.GetY() * _nono->GetSpeed())));
						
						if (dx or dy <= 1) {
							_nono->Attack(_zombie);
						}
					}		
				}
				else if (_caise2){
					float dx = _caise2->GetPosition().GetX() - _nono->GetPosition().GetX();
					float dy = _caise2->GetPosition().GetY() - _nono->GetPosition().GetY();
					Vector2 dist(dx, dy);
					dist.Norm();

					_nono->SetDirection(dist);
					_nono->Move(); //_nono->SetPosition(Vector2(_nono->GetPosition().GetX() + (dist.GetX() * _nono->GetSpeed()), _nono->GetPosition().GetY() + (dist.GetY() * _nono->GetSpeed())));

					if (dx or dy <= 1) {
						_nono->Attack(_caise2);
					}
			
			    }
			}
		}
	}

	for (size_t i = 0; i < entities.size(); i++)
	{
		Mob* _zombie = dynamic_cast<Mob*>(entities[i]);
		BreakableObject* _caise2 = dynamic_cast<BreakableObject*>(entities[i]);
		if (entities[i] != _zombie) {
			MobAlive = false;
		}
		if (entities[i] != _caise2) {
			BreakO = false;
		}
	}

	if (MobAlive == false and BreakO == false)
	{
		std::cout << "Simulation Finished" << std::endl;
	}
}

	

