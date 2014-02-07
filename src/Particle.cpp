//
//  Particle.cpp
//  TwitterParticles
//
//  Created by David Haylock on 07/02/2014.
//
//

#include "Particle.h"

Particle::Particle( ofPoint l,string ts,string tn ) {
    acceleration.set(0,0);
    velocity.set(ofRandom(-1,1), ofRandom(-1.0,0));
    location = l;
    lifespan = 255.0;
    mass = 1;
    text = ts;
    name = tn;
}

void Particle::update() {
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
    lifespan -= 0.5;
}

void Particle::display() {
    ofEnableAlphaBlending();
    
    ofFill();
    ofSetColor( 255, lifespan);
    ofCircle(location, 6);
    
    ofNoFill();
    ofSetLineWidth(2);
    ofSetColor( 0, lifespan);
    ofCircle(location, 6);
    ofDisableAlphaBlending();
    
    ofSetColor(255,lifespan);
    ofDrawBitmapString(text,location.x+5,location.y +15);
    ofDrawBitmapString(name,location.x,location.y);
    
}

void Particle::applyForce(ofPoint force) {
    force /= mass;
    acceleration += force;
}

bool Particle::isDead() {
    if (lifespan < 0.0) {
        return true;
    } else {
        return false;
    }
}