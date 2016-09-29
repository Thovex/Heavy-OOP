#include "Particle.h"

Particle::Particle() {
	angle = 0;
	radius = ofRandom(0, 20);
	startPosition = ofPoint(ofGetWidth() / 2, ofGetHeight() / 2);
	randomValue = ofRandom(0, 250);
	speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
	innerColour = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), ofRandom(255));
	outerColour = ofColor(ofRandom(255), ofRandom(255), ofRandom(255), ofRandom(255));
}

void Particle::move() {
	angle += 0.1 * randomValue/250;
	position.x = startPosition.x + cos(angle)* randomValue;
	position.y = startPosition.y + sin(angle)* randomValue;

}

void Particle::draw() {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius*0.25);
}
