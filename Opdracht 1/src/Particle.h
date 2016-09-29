#pragma once

#include "ofMain.h"

class Particle {
public:

	int radius;
	float lifetime;

	ofPoint particlePosition;
	ofVec2f particleSpeed;
	
	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;
	
	Particle();

	void Draw();
	void Handle();
};

