#include "Banana.h"

//W
Banana::Banana() : Fruit()
{
	_vitamins = 5;
	_name = "banana";
}

//A
Banana::~Banana()
{
}


//T
int	Banana::getVitamins() const
{
	return _vitamins;
}

//S
std::string	Banana::getName() const
{
	
	//O
	return _name;
	//N
}/* Watson**/
