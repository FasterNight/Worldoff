#include"Alive.h"

Alive::Alive(float _MaxHealt, float _CurrentHealt) : MaxHealt(_MaxHealt), CurrentHealt(_CurrentHealt) {

}

float Alive::GetMaxHealt(float _MaxHealt) {
	return _MaxHealt;
}

float Alive::GetCurrentHealt() const {
	return CurrentHealt;
}

void Alive::TakeDamage(float _dmg) {
	CurrentHealt -= _dmg;
}

