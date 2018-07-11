

#if !defined (FRUIT_BOX_h_)
	#define FRUIT_BOX_h_

	#include "FruitNode.h"

class FruitBox {
public:
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

#endif /* !defined (FRUIT_BOX_h_) */
