#pragma once

#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY);
        virtual void Handle();
        void Draw();
        void SetColors(ofColor centerColor, ofColor innerColor, ofColor outerColor);

    protected:
		long lifetime;
		float radius;

        ofPoint position;
        ofVec2f speed;

		ofColor centerColour;
        ofColor innerColour;
        ofColor outerColour;

};

