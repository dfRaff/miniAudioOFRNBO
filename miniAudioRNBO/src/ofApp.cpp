#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0, 0, 0);
    
    Circle2X = 10;
    Circle2Y = 10;
    xspeed = 2.5;
    yspeed = 2;
    
    
    threading.setup();
    isDragging = false;
    
    circle1X = 200;
    circle1Y = 400;
    circleRad = 10;
    lineY = 400;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    Circle2X = Circle2X + xspeed;
    Circle2Y = Circle2Y + yspeed;
    
    if (Circle2X > ofGetWidth() || Circle2X < 0) {
        xspeed = xspeed * -1;
      }
      if (Circle2Y > ofGetHeight() || Circle2Y < 0) {
        yspeed = yspeed * -1;
      }
//    threading.setRNBO(circle1Y);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawCircle(Circle2X, Circle2Y, circleRad);
    ofDrawBitmapString("Click!", 180, lineY - 20);
    ofDrawCircle(circle1X, circle1Y, circleRad);
    ofDrawLine(200, 400, 200, lineY);
    
}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    if (isDragging) {
        // Update the y-coordinate of the circle based on the mouse's y-coordinate
        circle1Y = y;
        lineY = y;
        threading.setRNBO(y);
        
        }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    float distance = ofDist(x, y, circle1X, circle1Y);
    
    if (distance <= circleRad) {
            // Mouse click is inside the circle, so draw the circle
//            ofDrawCircle(circle1X, circle1Y, circleRad);
        isDragging = true;
        threading.startThread();
//        std::cout << "pressed" <<std::endl;
        }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    isDragging = false;
}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

