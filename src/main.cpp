#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;
bool isGravityUp = false;
class $modify(PlayerObject){
	void update(float p0){
    if (this->m_playerSpeed == 0.7f)
	{
		this->m_playerSpeed = 0;
	}
	if (this->m_playerSpeed == 0)
	{
		if (!(this->m_isShip || this->m_isSpider || this->m_isRobot))
		this->setRotation(!isGravityUp ? 0.0 : -180);
	}
	
	return PlayerObject::update(p0);
	}
};
