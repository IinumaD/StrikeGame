#pragma once
#include "Position.h"
#include <cmath>
#include <Siv3D.hpp>

class Pull {
private:
	Point m_start;
	Point m_goal;

public:
	Pull(Point goal);
	~Pull() = default;

	void draw();
	void createVector(Point spos);
	double calcRadians();
};