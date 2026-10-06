#include "Player.h"

Player::Player()
{
	health = 100;
	stamina = 100;
	mana = 100;

	meleeDamage = 10;
	rangedDamage = 15;
	magicDamage = 20;

	meleeStaminaCost = 5;
	rangedStaminaCost = 10;
	magicManaCost = 10;
}
