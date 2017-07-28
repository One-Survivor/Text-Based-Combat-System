#include "RNG.h"
#include <iostream> 
#include <ctime> 
#include <cstdlib>

int roll(int num) {
	srand((unsigned)time(0));
	int random_integer;
	int range = (num - 1) + 1;
	random_integer = 1 + int(range*rand() / (RAND_MAX + 1.0));
	return random_integer;
}

int rollRange(int high, int low) {
	srand((unsigned)time(0));
	int random_integer;
	int range = (high - low) + 1;
	random_integer = low + int(range*rand() / (RAND_MAX + 1.0));
	return random_integer;
}

int random(int num) {
	srand((unsigned)time(0));
	int random_integer;
	int range = (num - 1);
	random_integer = int(range*rand() / (RAND_MAX + 1.0));
	return random_integer;
}
