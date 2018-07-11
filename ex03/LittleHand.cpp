/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */


#include <cstring>
#include "LittleHand.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"

void LittleHand::sortFruitBox(FruitBox &unsorted,
	FruitBox &lemons, FruitBox &bananas, FruitBox &limes)
{
	int count = unsorted.nbFruits();
	for (int i = 0; i < count; i++) {
		bool res = false;
		Fruit *f = unsorted.pickFruit();
		if (dynamic_cast<Lime*>(f) != nullptr)
			res = limes.putFruit(f);
		else if (dynamic_cast<Lemon*>(f) != nullptr)
			res = lemons.putFruit(f);
		else if (dynamic_cast<Banana*>(f) != nullptr)
			res = bananas.putFruit(f);
		if (!res)
			unsorted.putFruit(f);
	}
}

FruitBox * const *LittleHand::organizeCoconut(Coconut const * const *coconuts)
{
	if (!coconuts)
		return NULL;
	size_t boxes = 0;
	FruitBox **res = nullptr;
	FruitBox **tmp;
	while (*coconuts) {
		tmp = new FruitBox*[boxes + 1];
		memcpy(tmp, res, boxes * sizeof(*tmp));
		delete[] res;
		res = tmp;
		res[boxes] = new FruitBox(6);
		for (int i = 0; i < 6 && *coconuts; i++)
			res[boxes]->putFruit(*coconuts++);
		boxes++;
	}
	tmp = new FruitBox*[boxes + 1];
	memcpy(tmp, res, boxes * sizeof(*tmp));
	delete[] res;
	tmp[boxes] = nullptr;
	return (tmp);
}

void LittleHand::plugMixer(MixerBase &mixer)
{
	((Mixer&)mixer).plug();
}
/* Watson */
/* My own copyright */
