#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAXPARTICLES 500

class ofApp : public ofBaseApp {
    public:
		vector<Particle> particles;

		void setup();
		void update();
		void draw();
		void keyPressed(int key);
};
