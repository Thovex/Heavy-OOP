#include "ofApp.h"

void ofApp::setup() {
	for (int i = 0; i < MAXPARTICLES; i++) {
		particles.push_back(Particle());
	}
}

void ofApp::update() {
	for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
		i->Handle();
	}
}

void ofApp::draw() {
	for (vector<Particle>::iterator i = particles.begin(); i != particles.end(); i++) {
		i->Draw();
	}
}

void ofApp::keyPressed(int key) {
	for (int i = 0; i < MAXPARTICLES; i++) {
		particles.push_back(Particle());
	}
}