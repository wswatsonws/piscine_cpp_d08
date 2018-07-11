#ifndef FRUINODE_H_
#define FRUINODE_H_

#include "Fruit.h"

typedef struct FruitNode
{
	Fruit		*fruit;
	FruitNode	*next;
} FruitNode;

#endif /*Watson**/
