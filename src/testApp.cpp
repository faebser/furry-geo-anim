#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	ticker = 0;
	
	// add one of each bit to the vector
	firstBit bit = firstBit();
	bits.push_back(bit);
	currentBit = &bits.at(0);
}

//--------------------------------------------------------------
void testApp::update(){
	currentBit->update();
}

//--------------------------------------------------------------
void testApp::draw(){
	//currentBit->draw();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}