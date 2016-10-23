#include "Particle.h"


Particle::Particle(int startX, int startY) {
    radius = ofRandom(2, 20);
    position = ofPoint(startX,
                       startY);


    speed = ofVec2f(ofRandom(-2, 2),
                    ofRandom(-2, 2));

    innerColour = ofColor(31, 127, 255, 127);
    outerColour = ofColor(128, 255, 255, 15);
    lifetime = 0;
}

Particle::~Particle() {
}

const void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
    centerColour = center;
    innerColour = inner;
    outerColour = outer;
}

const void Particle::move() {
    position += speed;
    lifetime++;
}


const void Particle::draw() {
    ofSetColor(outerColour);
    ofDrawCircle(position.x, position.y, radius * 2.0);

    ofSetColor(innerColour);
    ofDrawCircle(position.x, position.y, radius);

    ofSetColor(centerColour);
    ofDrawCircle(position.x, position.y, radius * 0.25);
}

const bool Particle::isDead() {
    return lifetime > MAX_LIFETIME;
}
