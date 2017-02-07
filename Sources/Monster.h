#pragma once
#include "Position.h"
#include <Siv3D.hpp>

class Monster {
protected:
	s3d::String m_name;
	int m_hp;
	Position m_drawPosition;
	Position m_centerPosition;

public:
	Monster(s3d::String name, int hp, Position dpos, Position cpos) : m_name(name), m_hp(hp),
		m_drawPosition(dpos), m_centerPosition(cpos) {}
	virtual ~Monster() = default;

	int getHp() { return m_hp; }
	Position getDrawPosition() { return m_drawPosition; }
	void setDrawPosition(Position pos) { m_drawPosition = pos; }
	Position getCeneterPosition() { return m_centerPosition; }
	void setCenterPosition(Position pos) { m_centerPosition = pos; }
};