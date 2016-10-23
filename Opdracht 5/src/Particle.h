#pragma once

#include "ofMain.h"

class Particle {
	public:
		float radius;
	
		ofPoint position;
		ofVec2f speed;

		ofColor centerColour, innerColour, outerColour;

		Particle();
		void Draw();
		virtual void Handle();
		void SetColors(ofColor center, ofColor inner, ofColor outer);
};

