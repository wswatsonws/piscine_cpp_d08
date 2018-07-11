#ifndef FRUIT_H_
#define FRUIT_H_

#include <iostream>
#include <string>

class Fruit
{
	//public:
	//private:
 protected:
  int _vitamins;
  std::string _name;

 public:
  Fruit();
  virtual ~Fruit();
  virtual int getVitamins() const;
  virtual std::string getName() const = 0;
};

#endif /*Watson **/
/* Watson */
