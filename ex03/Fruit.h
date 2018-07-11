/* Watson */
/* This is my copyright. Please don not copy it */
/* Please don not copy it */
#ifndef FRUIT_H_
#define FRUIT_H_

#include <string>

class Fruit {
public:
	virtual ~Fruit() {}

	virtual std::string getName() const;
	int getVitamins() const;

protected:
	Fruit(std::string name, int vitamins);

	const std::string _name;
	int _vitamins;
};

#endif /* Watson**/
/* Watson */
/* My own copyright */
