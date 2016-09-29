#pragma once

#include "ofMain.h"

class Particle {
    public:
        Particle(int startX, int startY);
        virtual void Handle();
        void Draw();
        void SetColors(ofColor centerColor, ofColor innerColor, ofColor outerColor);

    protected:
		float lifetime;
		float radius;
		float angle;
		float randomValue;

		ofVec2f startPosition;
        ofPoint position;
        ofVec2f speed;

		ofColor centerColour;
        ofColor innerColour;
        ofColor outerColour;

};

