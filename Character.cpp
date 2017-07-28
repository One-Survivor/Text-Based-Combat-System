#include "Character.h"
#include "Ai.h"

bool Character::checkLife() {
	if (health <= 0) {
		stillAlive = false;
		return false;
	}
	else {
		return true;
	}
};

int Character::getHealth() {
	return health;
}

int Character::getMaxHealth() {
	return maxHealth;
}

Character::Character() {

}

Character::Character(string Type, int Health, int MaxHealth, bool Hero, bool Badguy, int Reflexes, int RocketCount) {
	string type =Type;
	int health = Health;
	int maxHealth = MaxHealth;
	bool hero = Hero;
	bool badguy = Badguy;
	int reflexes = Reflexes;
	int rocketCount = RocketCount;
}

bool Character::changeHealth(int amount) {
	health = health - amount;
	return checkLife();
};