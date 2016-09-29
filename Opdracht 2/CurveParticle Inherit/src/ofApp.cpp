#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	particle = Particle();
	particleCurve = CurveParticle();
}

//--------------------------------------------------------------
void ofApp::update(){
	particle.Handle();
	particleCurve.Handle();
}

//--------------------------------------------------------------
void ofApp::draw(){
	particle.Draw();
	particleCurve.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	particle = Particle();
	particleCurve = CurveParticle();
}
