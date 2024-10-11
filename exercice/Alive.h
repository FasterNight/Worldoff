#pragma once
class Alive
{

protected:
	float MaxHealt;
	float CurrentHealt;

public:
	Alive(float,float);

	virtual float GetMaxHealt(float);
	virtual float GetCurrentHealt() const;
	virtual void TakeDamage(float);
};
