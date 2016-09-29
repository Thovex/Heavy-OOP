#pragma once


#include "ofMain.h"
#include "Particle.h"

class CurvingParticle : public Particle {
    public:
		ofVec2f curve;

        CurvingParticle(int startX, int startY);
        void Handle();
};

