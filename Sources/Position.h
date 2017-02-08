#pragma once

class Position {
private:
	double m_x;
	double m_y;

public:
	Position() {};
	Position(double x, double y) : m_x(x), m_y(y) {}
	~Position() = default;

	double getX() { return m_x; }
	double getY() { return m_y; }
};