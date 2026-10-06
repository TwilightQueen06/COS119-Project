#include "Enemy.h"

Enemy::Enemy(int health, int damage)
{
	this->health;
	this->damage;
}

void Enemy::takeDamage(int damage)
{
	this->health = this->health - damage;
}
