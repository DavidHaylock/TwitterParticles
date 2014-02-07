#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup()
{

    receiver.setup(PORT);
    
    ofSetFrameRate(60);
    ofBackground(0);
    
    ps = new ParticleSystem(ofPoint(ofGetWidth()/2, 50));
    
}

//--------------------------------------------------------------
void testApp::update()
{
    
    // check for waiting messages
	while(receiver.hasWaitingMessages()){
		// get the next message
		ofxOscMessage m;
		receiver.getNextMessage(&m);
        
		
		if(m.getAddress() == "/tweetData")
        {
			ps->addParticle(m.getArgAsString(0), m.getArgAsString(1));
		}
    }
    
    ofPoint gravity = *new ofPoint(0,0.001);
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
