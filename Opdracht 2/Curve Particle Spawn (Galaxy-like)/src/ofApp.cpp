#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	for (int i = 0; i < MAXBALLS; i++) {
		part1[i] = Particle();
	}
}

//--------------------------------------------------------------
void ofApp::update(){


	for (int i = 0; i < MAXBALLS; i++) {
		part1[i].move();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < MAXBALLS; i++) {
		part1[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
