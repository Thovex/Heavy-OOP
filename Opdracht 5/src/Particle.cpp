#include "Particle.h"

Particle::Particle() {
	radius = ofRandom(10, 20);
	position = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	centerColour = ofColor(ofRandom(100, 200), ofRandom(100, 200), ofRandom(100, 200), ofRandom(200, 255));
	innerColour = ofColor(ofRandom(0,50), ofRandom(100,200), ofRandom(100, 200), ofRandom(100,150));
	outerColour = ofColor(ofRandom(100, 200), ofRandom(100, 200), ofRandom(100, 200), ofRandom(0,100));
}

void Particle::SetColors(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}

void Particle::Handle() {
	position += speed;
}


void Particle::Draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}