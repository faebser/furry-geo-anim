#ifndef GEOBIT_H
#define GEOBIT_H

namespace fab {
	class geoBit {
		public:
			geoBit() {};
			virtual void setup() {};
			virtual void update(float tick) = 0;
			virtual void draw() {};
			virtual void saveFullRepeat() {};
			virtual ~geoBit() {};
		};
}

#endif // GEOBIT_H
