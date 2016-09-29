#pragma once

#include "ofMain.h"
#include "Particle.h"

#define MAXBALLS 100

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		
		Particle part1[MAXBALLS];
};
