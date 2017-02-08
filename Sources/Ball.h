#pragma once
#include "Monster.h"
#include <cmath>

class Ball : Monster{
protected:
	static const double DECELERATION;
	double m_radius;
	int m_attack;
	double m_speed;
	double m_direction;
	bool isMove;

public:
	Ball(s3d::String name, int hp, double speed, int attack, Position dpos, Position cpos, double radius);
	virtual ~Ball() = default;

	void initalize();
	void update();
	void draw();
	void finalize();

	void start(double rad);
	void move();
};

__declspec(selectany) const double Ball::DECELERATION(0.8);