///TODO: CLEAN UP HEADER CODE. MAYBE SOME THINGS DEFINED THAT DID NOT NEED TO BE DEFINED///
///CHANGE ALL VECTORS INTO VECTORS///

#pragma once
#include "Character.h"
#include <vector>
#include "Tools.h"

//Tools//
void clearCharVector(std::vector <Character>);

//Combat Command//
void startCombat(Character, Character, Character, Character, Character, Character);

//Setup//
std::vector <Character> combatOrder;
int reflexHolder[6];
void findLargeInArray(int, int, int[]);
void getCharacterOrder(int, Character[]);

//Combat Rounds//

std::vector <Character> badGuys;
std::vector <Character> goodGuys;
bool lifeCheck(Character);