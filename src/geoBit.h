#ifndef GEOBIT_H
#define GEOBIT_H

namespace fab {
	class geoBit {
		public:
			geoBit() {};
			virtual void setup() {};
			virtual void draw(float tick) {};
			virtual void saveFullRepeat() {};
			virtual ~geoBit() {};
		};
}

#endif // GEOBIT_H
