#pragma once

#include "ofMain.h"

class Particle {
public:
	float radius;
	float angle;
	float randomValue;

	long lifetime;

	ofVec2f speed;
	ofPoint startPosition;
	ofPoint position;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

	Particle();

	void move();
	void draw();
};
