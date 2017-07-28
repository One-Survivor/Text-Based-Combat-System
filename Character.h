#pragma once
#include <string>

class Character {
	private:
		int health;
		int maxHealth;
		bool stillAlive;
		
	public:
		std::string type;
		bool hero;
		bool badguy;
		int strength;
		std::string healthState;
		int reflexes;
		int rocketCount;
		int shieldTimer;
		int shieldHealth;
		bool checkLife();
		bool changeHealth(int);
		int getHealth();
		int getMaxHealth();

		Character();
		Character(std::string, int, int, bool, bool, int, int);
};