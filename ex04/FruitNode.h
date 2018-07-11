#if !defined (FRUIT_NODE_h_)
	#define FRUIT_NODE_h_

	#include "Fruit.h"

	#define Fruitnode FruitNode

typedef struct FruitNode {
	const Fruit *fruit;
	struct FruitNode *next;
} FruitNode;

#endif /* Watson */
