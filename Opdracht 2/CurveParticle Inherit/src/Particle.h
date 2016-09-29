#pragma once

#include "ofMain.h"

class Particle {

	public:
		float radius;

		long lifetime;

		ofPoint position;
		ofVec2f speed;

		ofColor centerColour;
		ofColor innerColour;
		ofColor outerColour;

		Particle();
		void Draw();
		virtual void Handle();
};
