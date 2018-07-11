#include "Lime.h"

Lime::Lime() : Lemon()
{
	_vitamins = 2;
	_name = "lime";
}

Lime::~Lime()
{
}

int		Lime::getVitamins() const
{
	return _vitamins;
}/*Watson**/

std::string	Lime::getName() const
{
	return _name;
}/*Watson**/
