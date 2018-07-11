

#if !defined (MIXER_h_)
	#define MIXER_h_

	#include "MixerBase.h"

class Mixer : public MixerBase {
public:
	Mixer();

	void plug();
};

#endif /* !defined (MIXER_h_) */
