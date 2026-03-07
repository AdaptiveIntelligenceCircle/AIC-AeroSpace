#pragma once 

#include <iostream> 
using namespace std; 

#include "trajectory_planner.h"
#include "../core/mission_state.h"

namespace aic :: Aerospace
{
    class HazardDetector
    {
        public: 
        bool detect(const MissionState &state, const Trajectory &traj) const; 

        private: 
        bool collisonRisk(const Trajectory &traj) const; 
    }; 
}