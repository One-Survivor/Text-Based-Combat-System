#include "Abilities.h"
#include "Ai.h"
#include "Character.h"
#include "RNG.h"

void attack(Character defender) {
	dealDamage(rollRange(2, 3), defender);
};

void shield(Character friendly) {
	friendly.shieldTimer = 2;
	friendly.shieldHealth = 5;
};

void heal(Character friendly) {
	friendly.changeHealth(-3);
}

void fireRocket(Character defenders[], Character robot) {
	for (Character i : defenders) {
		dealDamage(rollRange(3, 4), i);
		robot.rocketCount = robot.rocketCount - 1;
	}
};

void moveObject(Character target1, Character target2) {
	dealDamage(rollRange(0, 5), target1);
	dealDamage(rollRange(0, 5), target2);
}