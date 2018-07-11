#if !defined (LEMON_h_)
	#define LEMON_h_

	#include "Fruit.h"

class Lemon : public Fruit
{
public:
	Lemon();

protected:
	Lemon(std::string name, int vitamins);
};

#endif /* Watson */
