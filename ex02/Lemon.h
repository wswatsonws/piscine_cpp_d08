#ifndef LEMON_H_
#define LEMON_H_

#include "Fruit.h"

class Lemon : public Fruit
{
	public:
		Lemon();
		~Lemon();
		int		getVitamins() const;
		std::string	getName() const;
};

#endif /*Watson**/
