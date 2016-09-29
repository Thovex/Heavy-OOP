#include "ofApp.h"

void ofApp::setup() {
	ofColor rc = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    ofBackground(rc);

	particleEmitter1 = ParticleEmitter();
	particleEmitter1.setPos(200, 200);
	particleEmitter1.setCurvingParticleRatio(0.1);
	particleEmitter1.setColors(ofColor::white, ofColor(31, ofRandom(127,255), 0, 127), ofColor(128, 255, 255, 15));

	particleEmitter2 = ParticleEmitter();
	particleEmitter2.setPos(ofGetWidth() - 200, ofGetHeight() - 200);
	particleEmitter2.setCurvingParticleRatio(0.8);
	particleEmitter2.setColors(ofColor::white, ofColor(ofRandom(127, 255), 31, 0, 127), ofColor(255, 128, 255, 15));
}

void ofApp::update() {
    for (int i = 0; i < particles.size(); i++) {
        particles[i]->Handle();
    }

    Particle* newParts1 = particleEmitter1.createParticles();
    particles.push_back(newParts1);

    Particle* newParts2 = particleEmitter2.createParticles();
    particles.push_back(newParts2);
}

void ofApp::draw() {
    for (int i = 0; i < particles.size(); i++) {
        particles[i]->Draw();
    }
}