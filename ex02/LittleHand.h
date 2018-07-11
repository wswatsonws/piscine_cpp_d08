#ifndef LITTLEHAND_H_
#define LITTLEHAND_H_

#include <iostream>
#include <string>
#include "Lemon.h"
#include "Banana.h"
#include "FruitBox.h"
#include "Lime.h"
#include "Coconut.h"

class LittleHand
{
	public:
		LittleHand();
		~LittleHand();
	static void	sortFruitBox(FruitBox &unsorted,
		 FruitBox &lemons,
		 FruitBox &bananas,
		 FruitBox &limes);
	static FruitBox * const * organizeCoconut(Coconut const * const * coconuts_packet);
};

#endif /*Watson**/
