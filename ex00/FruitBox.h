#ifndef FRUITBOX_H_
#define FRUITBOX_H_

#include "Fruit.h"
#include "FruitNode.h"



class FruitBox
{
	//protected;
	private:
		int _size;
		int _nb;
		FruitNode	*list;

	public:
		FruitBox(int size);
		~FruitBox();
		int nbFruits() const;
		bool putFruit(Fruit *f);
		Fruit *pickFruit();
		FruitNode	*head() const;
};


#endif /*Watson **/
/* Watson */
