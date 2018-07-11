#ifndef COCONUT_H_
#define COCONUT_H_

#include <iostream>
#include <string>
#include "Fruit.h"

class Coconut: public Fruit
{
 public:
  Coconut();
  ~Coconut();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /*Watson**/
