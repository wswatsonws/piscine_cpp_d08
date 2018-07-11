/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */


#include "Fruit.h"

Fruit::Fruit(std::string name, int vitamins) :
	_name(name), _vitamins(vitamins)
{
}

std::string Fruit::getName() const
{
	return (this->_name);
}

int Fruit::getVitamins() const
{
	return (this->_vitamins);
}
/* Watson */
/* My own copyright */
