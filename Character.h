#pragma once
#include <string>
#include <vector>
using namespace std;

class Character {
	private:
		int health;
		int maxHealth;
		bool stillAlive;
		
	public:
		string type;
		bool hero;
		bool badguy;
		int strength;
		string healthState;
		int reflexes;
		int rocketCount;
		int shieldTimer;
		int shieldHealth;
		bool checkLife();
		bool changeHealth(int);
		int getHealth();
		int getMaxHealth();

		Character();
		Character(string, int, int, bool, bool, int, int);
};