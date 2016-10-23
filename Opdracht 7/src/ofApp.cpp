#include "ofApp.h"

void ofApp::setup() {
	ofColor rc = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    ofBackground(rc);

	particleEmitter1 = ParticleEmitter();
	particleEmitter1.setPos(200, 200);
	particleEmitter1.setCurvingParticleRatio(0.1);
	particleEmitter1.setColors(ofColor::white, ofColor(ofRandom(0, 255), ofRandom(0,255), ofRandom(0, 255), 127), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15));
}

void ofApp::update() {
	for (unsigned int i = 0; i < particles.size(); ++i) {
		particles[i]->Handle();
	}

	if (ofGetFrameNum() % 5 == 0) {
		Particle* freshParticle = particleEmitter1.createParticles();
		particles.push_back(freshParticle);
	}

	particleReaper.DieDieDie(particles);

	ofSetWindowTitle("Particles: " + ofToString(particles.size()));
}

void ofApp::draw() {
    for (int i = 0; i < particles.size(); i++) {
		particles[i]->Draw();
    }
}

void ofApp::Reset() {
	particles.clear();

	amountParticles = 0;

	hitMax = false;

}