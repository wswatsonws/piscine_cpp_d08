
#if !defined (LITTLE_HAND_h_)
	#define LITTLE_HAND_h_

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

#endif /* !defined (LITTLE_HAND_h_) */
