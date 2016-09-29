#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(10, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(2,5), 2);
	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);
	centerColour = ofColor::white;
}

void Particle::Draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);
}

void Particle::Handle() {
	position.x += speed.x;

}


