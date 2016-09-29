#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"

class ofApp : public ofBaseApp {

    public:
        void setup();
        void update();
        void draw();

        vector<Particle*> particles;

        ParticleEmitter particleEmitter1;
        ParticleEmitter particleEmitter2;
};
