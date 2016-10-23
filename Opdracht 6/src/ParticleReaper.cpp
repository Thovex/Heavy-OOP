#include "ParticleReaper.h"

void ParticleReaper::DieDieDie(vector<Particle*>& particles) {
	for (vector<Particle*>::iterator Torbjorns = particles.begin(); Torbjorns != particles.end();) {
		if ((*Torbjorns)->isDead()) {
			delete *Torbjorns;
			Torbjorns = particles.erase(Torbjorns);
		}
		else {
			++Torbjorns;
		}
	}
}