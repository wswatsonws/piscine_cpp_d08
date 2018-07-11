#include "Mixer.h"
MixerBase::MixerBase()
{
}

MixerBase::~MixerBase()
{
}

static int testMixer(FruitBox& box)
{
	Fruit const *fruit;
	int	vit;

	vit = 0;
	while ((fruit = box.pickFruit()) != 0)
		vit += fruit->getVitamins();
	return vit;
}

Mixer::Mixer()
{
  _plugged = true;
  _mixfunc = &testMixer;
}

Mixer::~Mixer()
{
}
