

#if !defined (LITTLE_HAND_h_)
	#define LITTLE_HAND_h_

	#include "FruitBox.h"

class LittleHand {
public:
	static void sortFruitBox(FruitBox &unsorted,
		FruitBox &lemons,
		FruitBox &bananas,
		FruitBox &limes);
};

#endif /* !defined (LITTLE_HAND_h_) */
