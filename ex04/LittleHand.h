/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */
#ifndef LITTLE_HAND_H_
#define LITTLE_HAND_H_

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
/* Watson */
/* My own copyright */
