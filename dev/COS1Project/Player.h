#pragma once

class Player
{
private:
	int health;
	int stamina;
	int mana;

	int meleeDamage;
	int rangedDamage;
	int magicDamage;

	int meleeStaminaCost;
	int rangedStaminaCost;
	int magicManaCost;

public:
	Player();

	void meleeAttack();
	void rangedAttack();
	void magicAttack();

};