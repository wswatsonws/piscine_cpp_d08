#if !defined (LITTLE_HAND_h_)
	#define LITTLE_HAND_h_

	#include "Coconut.h"
	#include "FruitBox.h"
	#include "Mixer.h"

class LittleHand {
public:
	static void sortFruitBox(FruitBox &unsorted,
		FruitBox &lemons,
		FruitBox &bananas,
		FruitBox &limes);
	static FruitBox * const *organizeCoconut(
		Coconut const * const *coconuts);
	static void plugMixer(MixerBase &mixer);
	static void injectVitamin(Fruit &f, int quantity);
};

#endif /* Watson */
