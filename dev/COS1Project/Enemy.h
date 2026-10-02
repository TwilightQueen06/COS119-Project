#pragma once
class Enemy
{
private:
	int health;
	int damage;

public:
	Enemy(int health, int damage);

	void takeDamage(int damage);

};

