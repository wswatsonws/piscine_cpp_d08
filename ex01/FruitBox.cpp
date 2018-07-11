#include "FruitBox.h"
#include "Fruit.h"

FruitBox::FruitBox(int size) : _size(size), _nb(0), list(NULL)
{
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits() const
{
  return _nb;
}

bool FruitBox::putFruit(Fruit *f)
{
  FruitNode *tmp;
  FruitNode *elem;
  int		nb(1);

    if (nb > _size)
      return (false);
  if (list == NULL)
    {
      list = new FruitNode;
      list->fruit = f;
      list->next = NULL;
      _nb++;
      return (true);
    }
  tmp = list;
  while (tmp->next != NULL)
    {
      if ((tmp->fruit == f) || (nb >= _size))
	return (false);
      nb++;
      tmp = tmp->next;
    }
  if (nb >= _size)
    return (false);
  if (tmp->fruit == f)
    return (false);
  elem = new FruitNode;
  elem->fruit = f;
  elem->next = NULL;
  tmp->next = elem;
  _nb++;
  return (true);
}

Fruit		*FruitBox::pickFruit()
{
  FruitNode	*tmp;
  Fruit		*f;

  if (list == NULL)
    return (NULL);
  f = list->fruit;
  tmp = list;
  list = list->next;
  delete tmp;
  _nb--;
  return (f);
}/*Watson**/

FruitNode	*FruitBox::head() const
{
  return list;
}/*Watson**/
