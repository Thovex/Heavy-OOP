#include "CurvingParticle.h"

CurvingParticle::CurvingParticle(int startX, int startY) : Particle(startX, startY) {
    curve = ofVec2f(ofRandom(-5, 5),
                    ofRandom(-5, 5));
}

CurvingParticle::~CurvingParticle() {
}

const void CurvingParticle::move() {
    position += speed;
    curve.rotate(2);
    position += curve;
}
