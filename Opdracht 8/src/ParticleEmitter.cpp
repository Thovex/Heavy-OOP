#include "ParticleEmitter.h"
#include "CurvingParticle.h"

Particle* ParticleEmitter::emit() {
    Particle* newParticle;

    if (ofRandom(1) > (1 - curvingParticleRatio)) {
        newParticle = new CurvingParticle(originX, originY);
    } else {
        newParticle = new Particle(originX, originY);
    }
    newParticle->setColours(ofColor::white, inner, outer);

    return newParticle;
}

const void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

const void ParticleEmitter::setOrigin(int x, int y) {
    originX = x;
    originY = y;
}

const void ParticleEmitter::setColours(ofColor innerColour, ofColor outerColor) {
    inner = innerColour;
    outer = outerColor;
}