#include "Character.h"
#include "Combat.h"
#include "Abilities.h"
#include "Ai.h"
#include "RNG.h"

bool healRequired;
int rHolder;

//Migrate To Tools?//
std::string healState[] {
	"FullHealth",
	"LowHealth",
	"SliverHealth"
};

Character friendly[4];
Character hostile[4];
Character healChoices[4];
Character shieldChoices[4];

void getFriendlyArray(Character fighter) {
	//Getting friendly array//
	if (fighter.badguy = true) {
		friendly = badGuys;
		hostile = goodGuys;
	}
	else {
		friendly = goodGuys;
		hostile = badGuys;
	}
}

void healthStateHandling(Character fighter) {
	if (fighter.getHealth() <= fighter.getMaxHealth() * .2) {
		fighter.healthState = healState[2];
	}
	else if (fighter.getHealth() <= fighter.getMaxHealth() * .5) {
		fighter.healthState = healState[1];
	}
	else {
		fighter.healthState = healState[0];
	}
}

void dealDamage(int num, Character target) {
	target.changeHealth(num);
	healthStateHandling(target);
}

//ADD VECTOR REMOVE//
void healerAi(Character healer) {
	//Checking to see if friendlies are still alive//
	getFriendlyArray(healer);
	int friends = 0;
	int healNeeded = 0;
	int shieldNeeded = 0;
	rHolder = 0;
	for (Character i : friendly) {
		friends = friends + 1;
	}
	if (friends > 0) {
		//Checking to see if friendlies are injured enough for a heal//
		for (Character i : friendly) {
			if (i.healthState == "LowHealth") {
				healChoices.push_back(i);
			}
		}
		if (healChoices.empty()) {
			healRequired = false;
		}
		else {
			heal(healChoices[random(healNeeded)]);
		}
		//Checking to see if need to defend anyone//
		if (healRequired == false) {
			for (Character i : friendly) {
				//Checks to see if the target is not a healer. Healers should not be defending each other.//
				//Also adds all possible targets, to find who has the slowest reaction time.//
				if (i.type != "Healer") {
					shieldChoices.push_back(i);
				}
			}
			Character shieldChoice;
			for (Character i : shieldChoices) {
				if (i.reflexes > rHolder) {
					rHolder = i.reflexes;
					shieldChoice = i;
				}
			}
			shield(shieldChoice);
		}
		
	}
	
	else {
		int targets = 0;
		///TODO: REMOVE BADGUY RELIANCE///
		for (Character i : goodGuys) {
			if (i.checkLife() == true) {
				targetOptions.push_back(i);
				targets = targets + 1;
			}
		}
		attack(targetOptions[random(targets)]);
	}
	healRequired = true;
}

void rocketBot(Character bot) {
	getFriendlyArray(bot);
	if (bot.rocketCount > 0) {
		fireRocket(hostile, bot);
	}
	else {
		///TODO: REMOVE BADGUY RELIANCE///
		int targets = 0;
		for (Character i : goodGuys) {
			if (i.checkLife() == true) {
				targetOptions.push_back(i);
				targets = targets + 1;
			}
		}
		attack(targetOptions[random(targets)]);
	}
	rHolder = 0;
}
