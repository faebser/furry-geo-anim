#ifndef FIRSTBIT_H
#define FIRSTBIT_H

#include "geoBit.h" // Base class: fab::geoBit

namespace fab
{

class firstBit : public fab::geoBit
{
public:
	firstBit();
	void setup();
	void draw(float tick);
	void saveFullRepeat();
	~firstBit();

};

}

#endif // FIRSTBIT_H
