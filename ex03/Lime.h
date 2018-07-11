#ifndef LIME_H_
#define LIME_H_

#include <iostream>
#include <string>
#include "Lemon.h"

class Lime : public Lemon
{
	public:
		Lime();
		~Lime();
		int		getVitamins() const;
		std::string	getName() const;
};

#endif /*Watson**/
