#include "ofApp.h"

void ofApp::setup() {
	ofColor rc = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
    ofBackground(rc);

	particleEmitter1 = ParticleEmitter();
	particleEmitter1.setPos(200, 200);
	particleEmitter1.setCurvingParticleRatio(0.1);
	particleEmitter1.setColors(ofColor::white, ofColor(ofRandom(0, 255), ofRandom(0,255), ofRandom(0, 255), 127), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15));

	particleEmitter2 = ParticleEmitter();
	particleEmitter2.setPos(ofGetWidth() - 200, ofGetHeight() - 200);
	particleEmitter2.setCurvingParticleRatio(0.8);
	particleEmitter2.setColors(ofColor::white, ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 127), ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255), 15));
}

void ofApp::update() {
	for (int i = 0; i < particles.size(); i++) {
		particles[i]->Handle();
	}

	if (amountParticles < MAXPARTICLES){
		Particle* newParts1 = particleEmitter1.createParticles();
		particles.push_back(newParts1);
		amountParticles += 1;

		Particle* newParts2 = particleEmitter2.createParticles();
		particles.push_back(newParts2);
		amountParticles += 1;
	} else {
		hitMax = true;
	}

	if (hitMax) {
		Reset();
	}
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