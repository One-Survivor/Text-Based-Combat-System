#include "Tools.h"
#include "Character.h"

void clearCharVector(std::vector <Character> clear) {
	for (Character thing : clear) {
		clear.pop_back();
	}
}