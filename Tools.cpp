#include "Tools.h"
#include "Character.h"

void clearCharVector(vector <Character> clear) {
	for (Character thing : clear) {
		clear.pop_back();
	}
}