/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */
#include "Lemon.h"

Lemon::Lemon() : Fruit()
{
	_vitamins = 3;
	_name = "lemon";
}

Lemon::~Lemon()
{
}

int	Lemon::getVitamins() const
{
	//Return
	return _vitamins;
}

std::string	Lemon::getName() const
{
	return _name;
}
/* Watson */
/* My own copyright */
