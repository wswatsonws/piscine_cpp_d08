#ifndef BANANA_H_
# define BANANA_H_

#include "Fruit.h"

class Banana : public Fruit
{
 public:
  Banana();
  ~Banana();
  int		getVitamins() const;
  std::string	getName() const;
};

#endif /*Watson**/
