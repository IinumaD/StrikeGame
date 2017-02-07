#pragma once
#include "Monster.h"

class Ball : Monster{
protected:
	double m_radius;

public:
	Ball(s3d::String name, int hp, Position dpos, Position cpos, double radius);
	virtual ~Ball() = default;

	void initalize();
	void update();
	void draw();
	void finalize();

};