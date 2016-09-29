#pragma once

#include "Particle.h"

class ParticleEmitter {
    public:
		Particle* createParticles();
        void setPos(int x, int y);
        void setCurvingParticleRatio(float ratio);
        void setColors(ofColor centerColour, ofColor innerColour, ofColor outerColour);
    protected:
        int posX, posY;
        float curvingParticleRatio;
        ofColor centerColor, innerColor, outerColor;
};

