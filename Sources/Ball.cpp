#include "Ball.h"

Ball::Ball(s3d::String name, int hp, double speed, int attack, Position dpos, Position cpos, double radius) : 
	Monster(name, hp, dpos, cpos), m_radius(radius), m_speed(speed), m_attack(attack), isMove(false)
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

void Ball::start(double rad) {
	m_direction = rad;
	isMove = true;
}

void Ball::move() {
	if(isMove)
	setCenterPosition(Position(m_centerPosition.getX() + cos(m_direction), m_centerPosition.getY() + sin(m_direction)));
}

