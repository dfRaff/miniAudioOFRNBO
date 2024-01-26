#pragma once

#include "ofMain.h"
#include "RNBO.h"
#include "audioThread.hpp"

class ofApp : public ofBaseApp{

    public:
        void setup() override;
        void update() override;
        void draw() override;
        void exit() override;

        void keyPressed(int key) override;
        void keyReleased(int key) override;
        void mouseMoved(int x, int y ) override;
        void mouseDragged(int x, int y, int button) override;
        void mousePressed(int x, int y, int button) override;
        void mouseReleased(int x, int y, int button) override;
        void mouseScrolled(int x, int y, float scrollX, float scrollY) override;
        void mouseEntered(int x, int y) override;
        void mouseExited(int x, int y) override;
        void windowResized(int w, int h) override;
        void dragEvent(ofDragInfo dragInfo) override;
        void gotMessage(ofMessage msg) override;
        
    int Circle2X;
    int Circle2Y;
    int xspeed;
    int yspeed;
    int circle1X;
    int circle1Y;
    int circleRad;
    int lineY;
    
    bool isDragging;

    audioThreaded threading;
    
};

//First, follow the RNBO implementation on Max page. There are issues with one .h file not being found. This was resolved by highlighting the project, build phases, header, double click in the box and change it from non-recursive to recursive. If this doesn't work add an additional link to the rnbo file and change to recursive.
//Next, add the miniaudio.h file to the project in the same manner as RNBO. Then add the proper headers to the project with the one stated above. This should get things working.
