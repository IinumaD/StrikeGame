#include "Ball.h"

Ball::Ball(s3d::String name, int hp, Position dpos, Position cpos, double radius) : Monster(name, hp, dpos, cpos),
																				m_radius(radius)
{

}

void Ball::initalize() {

}

void Ball::update() {

}

void Ball::draw() {
	Circle(m_centerPosition.getX(), m_centerPosition.getY(), m_radius).draw(Palette::Red);
}

void Ball::finalize() {

}