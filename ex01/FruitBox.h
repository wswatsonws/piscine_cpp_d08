/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */
#ifndef FRUIT_BOX_H_
#define FRUIT_BOX_H_

#include "FruitNode.h"

class FruitBox {
public:
	//FruitBox;
	FruitBox(unsigned int capacity);
	FruitBox(const FruitBox &other) = delete;
	~FruitBox();

	FruitBox &operator=(const FruitBox &other) = delete;

	int nbFruits() const;
	bool putFruit(const Fruit *f);
	Fruit *pickFruit();
	FruitNode *head() const;

private:
	unsigned int _count;
	const unsigned int _capacity;
	FruitNode *_head;
};

#endif /* Watson**/
/* Watson */
/* My own copyright */
