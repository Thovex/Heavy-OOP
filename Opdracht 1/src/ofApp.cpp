#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	particle = Particle();
}

//--------------------------------------------------------------
void ofApp::update(){
	particle.Handle();
}

//--------------------------------------------------------------
void ofApp::draw(){
	particle.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
