//
//  Particle.h
//  TwitterParticles
//
//  Altered by David Haylock on 07/02/2014.
//  Created by Matthias Esterl on 7/4/13.
//

#ifndef __TwitterParticles__Particle__
#define __TwitterParticles__Particle__

#include <iostream>
#include "ofMain.h"

class Particle{
public:
    Particle(ofPoint,string ts,string tn);
    void update();
    void display();
    void applyForce(ofPoint);
    bool isDead();
    
    ofPoint location;
    ofPoint velocity;
    ofPoint acceleration;
    float lifespan;
    float mass;
    string text;
    string name;
    ofImage img;
    
    
};

#endif /* defined(__TwitterParticles__Particle__) */
