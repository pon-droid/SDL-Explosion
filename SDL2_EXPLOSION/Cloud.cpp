/*
 * Cloud.cpp
 *
 *  Created on: 2 Sept 2021
 *      Author: tp
 */

#include "Cloud.h"

namespace tbg {

Cloud::Cloud(): ticks(0), lastTime(0) {
	m_Particle = new Particle[NPARTICLES];

}

Cloud::~Cloud() {
	delete[] m_Particle;
}

void Cloud::Update(int ticks){

	int interval = ticks - lastTime;

    for(int i=0;i<Cloud::NPARTICLES;i++){
		m_Particle[i].Update(interval);
	}

	lastTime = ticks;
}

} /* namespace tbg */
