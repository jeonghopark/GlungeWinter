#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    
    ofEnableAlphaBlending();
    ofSetFrameRate( 60 );
    ofBackground( 0 );
    
    farbe1 = ofColor::fromHsb(114, 58, 255, 255);
    farbe2 = ofColor::fromHsb(15, 183, 255, 255);
    
    
    mainOffSetXPos = (ofGetWidth() - (baseArch.fassadeCorner[0].x + baseArch.fassadeCorner[1].x)) * 0.5;
    mainOffSetYPos = (ofGetHeight() - (baseArch.fassadeCorner[0].y + baseArch.fassadeCorner[3].y)) * 0.5;
    
    baseArch.mainOffSetXPos = mainOffSetXPos;
    baseArch.mainOffSetYPos = mainOffSetYPos;

    glungeWinter.inputBaseArch(baseArch);
    
}


//--------------------------------------------------------------
void ofApp::update() {
    
}


//--------------------------------------------------------------
void ofApp::draw() {
    

    ofPushMatrix();
    
    ofTranslate( mainOffSetXPos, mainOffSetYPos );
    
    glungeWinter.drawBackTexture();
    glungeWinter.drawBack();

    baseArch.guideFrames( gui->color_Frames );
    baseArch.drawEdgeCover( ofColor(0) );
//    baseArch.guideLines( ofColor(255) );
//    baseArch.guidePoints( ofColor(255) );

    baseArch.drawWindows( ofColor(255, 0, 0, 80) );
    glungeWinter.drawFront();
    
    ofPopMatrix();
    
}


//--------------------------------------------------------------
void ofApp::exit() {
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

    
}




//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

    
    mainOffSetXPos = (ofGetWidth() - (baseArch.fassadeCorner[0].x + baseArch.fassadeCorner[1].x)) * 0.5;
    mainOffSetYPos = (ofGetHeight() - (baseArch.fassadeCorner[0].y + baseArch.fassadeCorner[3].y)) * 0.5;
    baseArch.mainOffSetXPos = mainOffSetXPos;
    baseArch.mainOffSetYPos = mainOffSetYPos;
    

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}