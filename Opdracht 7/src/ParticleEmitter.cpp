#include "ParticleEmitter.h"
#include "CurvingParticle.h"

ParticleEmitter* ParticleEmitter::oneInstance = 0;

ParticleEmitter* ParticleEmitter::instance() {
	if (!oneInstance) {
		oneInstance = new ParticleEmitter();
	}
	return oneInstance;
}

Particle* ParticleEmitter::createParticles() {
    Particle* newParticle;

	if (ofRandom(1) > (1 - curvingParticleRatio)) {
		newParticle = new Particle(posX, posY);
	} else {
		newParticle = new Particle(posX, posY);
	}
	
	newParticle->SetColors(centerColor, innerColor, innerColor);
	return newParticle;
}

void ParticleEmitter::setCurvingParticleRatio(float ratio) {
    curvingParticleRatio = ratio;
}

void ParticleEmitter::setPos(int x, int y) {
    posX = x;
    posY = y;
}

void ParticleEmitter::setColors(ofColor centerColour, ofColor innerColour, ofColor outerColour) {
	centerColor = centerColour;
	innerColor = innerColour;
    outerColor = outerColour;
}
