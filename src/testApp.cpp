#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    dmx.connect("cu.usbserial-EN092192");
    
    dmx.setLevel(1,0);
    dmx.setLevel(2,0);
    dmx.setLevel(3,0);
    dmx.setLevel(4,0);
    
    gui0 = new ofxUISuperCanvas("Control DMX");
    
    gui0->addSpacer();
    gui0->addLabel("Motors");
    gui0->addSlider("Vettical", 0.0, 137, &verticalMotor);
    gui0->addSlider("Horizontal", 0.0, 188, &horizontalMotor);
    gui0->addSpacer();
    gui0->addLabel("Colors");
    gui0->addSlider("Blue", 0, 255, &blue);
    gui0->addSpacer();
    gui0->addSlider("Strober", 0, 255, &strober);
}

//--------------------------------------------------------------
void testApp::update(){
    dmx.setLevel(1,verticalMotor);
    dmx.setLevel(2,horizontalMotor);
    dmx.setLevel(3,blue);
    dmx.setLevel(4, strober);
    dmx.update();
}

//--------------------------------------------------------------
void testApp::draw(){

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
