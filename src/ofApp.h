#pragma once

#include "ofMain.h"
#include "GlungeWinter.h"

#include "GuiApp.h"
#include "BaseArch.h"


class ofApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    void exit();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    shared_ptr<GuiApp> gui;
    BaseArch baseArch;

    
    GlungeWinter glungeWinter;
    
    ofColor farbe1;
    ofColor farbe2;
    
    float mainOffSetXPos, mainOffSetYPos;
    

};
