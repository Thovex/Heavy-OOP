#include "Particle.h"

Particle::Particle(int startX, int startY) {
    radius = ofRandom(10, 20);
    position = ofPoint(startX, startY);
    speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void Particle::SetColors(ofColor centerColor, ofColor innerColor, ofColor outerColor) {
    centerColour = centerColor;
    innerColour = innerColor;
    outerColour = outerColor;
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
