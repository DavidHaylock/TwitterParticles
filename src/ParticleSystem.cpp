//
//  ParticleSystem.cpp
//  TwitterParticles
//
//  Created by David Haylock on 07/02/2014.
//
//

#include "ParticleSystem.h"

ParticleSystem::ParticleSystem(ofPoint location) {
    origin = location;
}

void ParticleSystem::addParticle(string tweetText, string tweetName){
    particles.push_back(new Particle(origin,tweetText,tweetName));
}

void ParticleSystem::update(){
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->update();
        if(particles.at(i)->isDead()){
            cout << "Particle dead!" << endl;
            particles.erase(particles.begin() + i);
        }
    }
}

void ParticleSystem::display(){
    for (int i = 0; i < particles.size(); i++){
        particles.at(i)->display();
    }
}

void ParticleSystem::applyForce(ofPoint f) {
    for (auto &p : particles) {
        p->applyForce(f);
    }
}