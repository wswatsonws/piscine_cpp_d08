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
	return _vitamins;
}/*Watson**/

std::string	Lemon::getName() const
{
	return _name;
}/*Watson**/
