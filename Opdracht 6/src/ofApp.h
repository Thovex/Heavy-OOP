#pragma once

#include "ofMain.h"
#include "Particle.h"
#include "ParticleEmitter.h"
#include "ParticleReaper.h"

#define MAXPARTICLES 500

class ofApp : public ofBaseApp {

    public:
		int amountParticles;
		bool hitMax = false;

        void setup();
        void update();
        void draw();
		void Reset();

        vector<Particle*> particles;

        ParticleEmitter particleEmitter1;
        ParticleEmitter particleEmitter2;
		ParticleReaper particleReaper;
};
