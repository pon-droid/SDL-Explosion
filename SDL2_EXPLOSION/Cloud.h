/*
 * Cloud.h
 *
 *  Created on: 2 Sept 2021
 *      Author: tp
 */

#ifndef CLOUD_H_
#define CLOUD_H_

#include"Particle.h"

namespace tbg {

class Cloud {
public:
	const static int NPARTICLES = 5000;
private:
	Particle *m_Particle;
	int ticks;
	int lastTime;
public:
    Cloud();
    virtual ~Cloud();

	const Particle* const Get_Particles() {
		return m_Particle;
	}
	;

	void Update(int ticks);
};

} /* namespace tbg */

#endif
