#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{

    ofSetFrameRate(60);
    ofBackground(0);
    
    ps = new ParticleSystem(ofPoint(ofGetWidth()/2, 50));
    
}

//--------------------------------------------------------------
void testApp::update()
{
    if(ofGetFrameNum() % 60 == 0){
        
        ps->addParticle("tweetText", "@tweetName");
        
    }
    ofPoint gravity = *new ofPoint(0,0.01);
    ps->applyForce(gravity);
    
    ps->update();
}

//--------------------------------------------------------------
void testApp::draw()
{
  ps->display();
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
