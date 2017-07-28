#pragma once
#include <string>
#include <vector>
#include "Character.h"
using namespace std;

string healState[];
void healerCheck(vector <Character>);
void dealDamage(int, Character);
void healthStateHandling(Character fighter);
std::vector <Character> targetOptions;
//enum healthState { FullHealth, LowHealth, SliverHealth };