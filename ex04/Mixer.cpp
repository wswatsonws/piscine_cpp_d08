/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */
#include "Mixer.h"

static int mix(FruitBox &fruits)
{
	int res = 0;
	FruitNode *node = fruits.head();
	while (node) {
		res += node->fruit->getVitamins();
		node = node->next;
	}
	return (res);
}

Mixer::Mixer()
{
	this->_mixfunc = ::mix;
}

void Mixer::plug()
{
	this->_plugged = true;
} /* Watson */
/* Watson */
/* My own copyright */
