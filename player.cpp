#include "player.h"

Player::Player(int _heatPoints, int _armorPoints) :
    heatPoints(_heatPoints),
    armorPoints(_armorPoints)
{

}

int Player::getHeatPoints() const
{
    return heatPoints;
}

int Player::getArmorPoints() const
{
    return armorPoints;
}

void Player::setHeatPoints(int value)
{
    heatPoints = value;
}

void Player::setArmorPoints(int value)
{
    armorPoints = value;
}
