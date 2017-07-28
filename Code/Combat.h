///TODO: CLEAN UP HEADER CODE. MAYBE SOME THINGS DEFINED THAT DID NOT NEED TO BE DEFINED///
///CHANGE ALL VECTORS INTO ARRAYS///

#pragma once
#include "Character.h"

//Combat Command//
void startCombat(Character, Character, Character, Character, Character, Character);

//Setup//
Character combatOrder[6];
int reflexHolder[6];
void findLargeInArray(int, int, int[]);
void getCharacterOrder(int, Character[]);

//Combat Rounds//
Character badGuys[4];
Character goodGuys[2];
bool lifeCheck(Character);