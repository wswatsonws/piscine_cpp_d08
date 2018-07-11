#if !defined (FRUIT_h_)
	#define FRUIT_h_

	#include <string>

class Fruit {
public:
	virtual ~Fruit() {}

	virtual std::string getName() const;
	int getVitamins() const;
	void setVitamins(int vitamins);

protected:
	Fruit(std::string name, int vitamins);

	const std::string _name;
	int _vitamins;
};

#endif /*Watson */
