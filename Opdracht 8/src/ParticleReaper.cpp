#include "ParticleReaper.h"

// Cleanup kan een constant zijn doordat we dit niet gaan aanpassen tijdens de applicatie
const void ParticleReaper::cleanup(vector<Particle*>& particles) {
    for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
        if ((*it)->isDead()) {
            delete *it;
            it = particles.erase(it);
        } else {
            ++it;
        }
    }
}
