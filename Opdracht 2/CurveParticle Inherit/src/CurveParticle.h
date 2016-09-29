#pragma once

#include "ofMain.h"
#include "Particle.h"

class CurveParticle : public Particle {
	public:
		ofVec2f particleCurve;

		CurveParticle();
		void Handle();
};