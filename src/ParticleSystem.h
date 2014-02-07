//
//  ParticleSystem.h
//  TwitterParticles
//
//  Created by David Haylock on 07/02/2014.
//
//

#ifndef __TwitterParticles__ParticleSystem__
#define __TwitterParticles__ParticleSystem__

#include <iostream>

#include "ofMain.h"
#include "Particle.h"

class ParticleSystem{
    
public:
    ParticleSystem(ofPoint);
    void update();
    void display();
    void applyForce(ofPoint);
    void addParticle(string tweetText, string tweetName);
    
    ofPoint origin;
    std::vector<Particle*> particles;
};



#endif /* defined(__TwitterParticles__ParticleSystem__) */
