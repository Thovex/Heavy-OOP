#pragma once


#include "ofMain.h"

#define MAX_LIFETIME 150

class Particle {
    public:
        Particle(int startX, int startY);
        virtual ~Particle();

		const virtual void move();

		const void draw();

		const void setColours(ofColor center, ofColor inner, ofColor outer);

		const bool isDead();

		// We veranderen de functies niet, dus deze kunnen constants zijn.
    protected:
        ofPoint position;
        float radius;
        ofVec2f speed;
        long lifetime;

        ofColor centerColour = ofColor::white;
        ofColor innerColour;
        ofColor outerColour;

};

