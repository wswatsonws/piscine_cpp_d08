#ifndef LITTLE_HAND_H_
#define LITTLE_HAND_H_

#include "Coconut.h"
#include "FruitBox.h"

class LittleHand {
public:
	static void sortFruitBox(FruitBox &unsorted,
		FruitBox &lemons,
		FruitBox &bananas,
		FruitBox &limes);
	static FruitBox * const *organizeCoconut(
		Coconut const * const *coconuts);
};

#endif /* Watson**/
/* Watson */
