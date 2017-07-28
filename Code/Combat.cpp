#include "Combat.h"
#include "Character.h"
#include "Abilities.h"
#include "RNG.h"
#include "Tools.h"
#include "Ai.h"
#include <vector>
#include <iostream>
#include <string>

int nHolder;
int first;
int second;
int third;
int fourth;
int fifth;
int sixth;

int numHolder;
//Migrate onto Tools//
bool gameOver;

/*************
*HERO CHOICES*
*************/

void heroChoices() {

}

/*************
*COMBAT SETUP*
*************/

//Finds largest in Array. The one closest to the begining of the Array gets a higher place.//
void findLargeInArray(int place, int tieholder, int anArray[]) {
	nHolder = 0;
	for (int i = 0; i < 6; i++) {
		if (anArray[i] > nHolder) {
			nHolder = anArray[i];
			place = i;
		}
		else if (anArray[i] == nHolder) {
			tieholder = i;
		}
	}

	anArray[place] = 0;
}

//Input the place of the character, and retrieves the Character.//
void getCharacterOrder(int place, Character fighterArray[]) {
	if (place = 0) {
		combatOrder.push_back(fighterArray[0]);
	}
	else if (place = 1) {
		combatOrder.push_back(fighterArray[1]);
	}
	else if (place = 2) {
		combatOrder.push_back(fighterArray[2]);
	}
	else if (place = 3) {
		combatOrder.push_back(fighterArray[3]);
	}
	else if (place = 4) {
		combatOrder.push_back(fighterArray[4]);
	}
	else if (place = 5) {
		combatOrder.push_back(fighterArray[5]);
	}
}

void splitGoodBad(Character fighterArray[]) {
	for (int i = 0; i == 5; i++) {
		if (fighterArray[i].badguy = true) {
			badGuys.push_back(fighterArray[i]);
		}
		else if (fighterArray[i].badguy = false) {
			goodGuys.push_back(fighterArray[i]);
		}
	}
}

//Gets the characters and gives them the order they need//
void setupCombat(Character hero, Character minion, Character hostile1, Character hostile2, Character hostile3, Character hostile4) {
	reflexHolder[0] = hero.reflexes;
	reflexHolder[1] = minion.reflexes;
	reflexHolder[2] = hostile1.reflexes;
	reflexHolder[3] = hostile2.reflexes;
	reflexHolder[4] = hostile3.reflexes;
	reflexHolder[5] = hostile4.reflexes;

	Character fighters[] = {
		{hero},
		{minion},
		{hostile1},
		{hostile2},
		{hostile3},
		{hostile4}
	};

	findLargeInArray(first, second, reflexHolder);
	findLargeInArray(second, third, reflexHolder);
	findLargeInArray(third, fourth, reflexHolder);
	findLargeInArray(fourth, fifth, reflexHolder);
	findLargeInArray(fifth, sixth, reflexHolder);
	findLargeInArray(sixth, sixth, reflexHolder);

	//TODO: Check to see if the fighters array needs the [] or not.//
	getCharacterOrder(first, fighters);
	getCharacterOrder(second, fighters);
	getCharacterOrder(third, fighters);
	getCharacterOrder(fourth, fighters);
	getCharacterOrder(fifth, fighters);
	getCharacterOrder(sixth, fighters);
	splitGoodBad(fighters);

}

/**************
*COMBAT ROUNDS*
**************/


bool lifeCheck(Character fighter) {
	return fighter.checkLife();
}

void combatRound() {
	//Setup//
	bool combat = true;
	int fighter = 0;
	int goodDead = 0;
	int badDead = 0;
	int numGoodGuys = 0;
	int numBadGuys = 0;
	for (Character i : goodGuys) {
		numGoodGuys = numGoodGuys + 1;
	}

	for (Character i : badGuys) {
		numBadGuys = numBadGuys + 1;
	}

	//The Combat Loop//
	while (combat == true) {
		/*Moves through the fighters, one by one. Once it reaches the
		last fighter, it resets to the first one.*/
		fighter = fighter + 1;
		if (fighter == 6) {
			fighter = 0;
		}

		//You must pass this if statement to do anything combat wise. Can't do anything if you are dead
		if (lifeCheck(combatOrder[fighter]) == true) {
			if (combatOrder[fighter].hero == true) {
				//TODO: 
				heroChoices();
			}
			else {
				//AI//
			}
			
			//Checking if Good Guys are alive//
			for (Character fighter : goodGuys) {
				if (fighter.checkLife() == false) {
					numGoodGuys = numGoodGuys - 1;
				}
			}

			//Checking if Bad Guys are alive//
			for (Character fighter : badGuys) {
				if (fighter.checkLife() == false) {
					numBadGuys = numBadGuys + 1;
				}
			}

			if (numGoodGuys == 0) {
				///TODO
				combat = false;
				gameOver = true;
			}
			else if (numBadGuys == 0) {
				///TODO
				combat = false;
			}
		}
	}
}

/******************
*COMBAT RESOLUTION*
******************/

void resolution() {
	first = 0;
	second = 0;
	third = 0;
	fourth = 0;
	fifth = 0;
	sixth = 0;

	if (gameOver = false) {
		//Heal hero and Bot from death//
		if (goodGuys[0].getHealth() == 0) {
			goodGuys[0].changeHealth(1);
		}
		else {
			goodGuys[1].changeHealth(1);
		}
	}

	else {
		//gameResolution();
	}

	//Clearing Vectors//
	clearCharVector(goodGuys);
	clearCharVector(badGuys);
	clearCharVector(combatOrder);
}

void startCombat(Character hero, Character minion, Character hostile1, Character hostile2, Character hostile3, Character hostile4) {
	setupCombat(hero, minion, hostile1, hostile2, hostile3, hostile4);
	combatRound();
	resolution();
}