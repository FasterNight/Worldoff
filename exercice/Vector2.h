#pragma once
#include <string>
class Vector2 {



protected:
	float x, y;

public:
	float GetX() const;
	float GetY() const;
	void Set(float, float);
	void SetX(std::string _xStr);
	void Norm();


	Vector2(float, float);


	
};
