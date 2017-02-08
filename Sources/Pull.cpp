#include "Pull.h"

Pull::Pull(Point goal) : m_goal(goal) {

}

void Pull::draw() {
	Line(m_start, m_goal).drawArrow();
}

void Pull::createVector(Point spos) {
	m_start = spos;
}

double Pull::calcRadians() {
	Position trans = Position(m_goal.x - m_start.x, m_goal.y - m_start.y);
	return atan2(trans.getY(), trans.getX());
}