#include "CurveParticle.h"

CurveParticle::CurveParticle() {
	particleCurve = ofVec2f(ofRandom(-5, 5), ofRandom(-5, 5));
}

void CurveParticle::Handle() {
	position += speed;
	particleCurve.rotate(2);
	position += particleCurve;
}
