#include "Particle.h"

Particle::Particle(int startX, int startY) {
	angle = 0;
	lifetime = 0;
	radius = ofRandom(10, 20);
	randomValue = ofRandom(0, 250);
	position = ofPoint(startX, startY);
    startPosition = ofPoint(startX, startY);
    speed = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void Particle::SetColors(ofColor centerColor, ofColor innerColor, ofColor outerColor) {
    centerColour = centerColor;
    innerColour = innerColor;
    outerColour = outerColor;
}

void Particle::Handle() {
	angle += 0.1 * randomValue / 250;
	position.x = startPosition.x + cos(angle)* randomValue;
	position.y = startPosition.y + sin(angle)* randomValue;
	lifetime++;

}

void Particle::Draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);

    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);

    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
}

bool Particle::isDead() {
	return lifetime > LIFETIME;
}
