#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleReaper.h"

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

    private:

        vector<Particle*> particles;

        ParticleEmitter emitter1;
        ParticleEmitter emitter2;
        ParticleReaper reaper;
};
