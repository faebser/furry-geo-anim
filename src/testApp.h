#pragma once

#include "ofMain.h"
#include "geoBit.h"

#include "firstBit.h"

using namespace fab;

class testApp : public ofBaseApp {

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		void switchBit();
		void saveBit();
		
	private:
		vector<geoBit> bits;
		geoBit * currentBit;
		float ticker;
};
