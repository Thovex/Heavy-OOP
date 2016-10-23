#include "ParticleReaper.h"

void ParticleReaper::DieDieDie(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator torbjorns = particles.begin(); torbjorns != particles.end();) {
		if ((*torbjorns)->isDead()) {
			delete *torbjorns;
			torbjorns = particles.erase(torbjorns);
		}
		else {
			++torbjorns;
		}
	}
}