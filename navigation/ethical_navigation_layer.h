#pragma once 

#include "trajectory_planner.h"
#include "../core/mission_state.h"

using namespace std;

#include <iostream>
#include <string> 

namespace aic :: Aerospace
{
    class EthicalNavigationLayer
    {
        public: 
        bool validate(const MissionState &state, const Trajectory &traj) const; 

        private: 
        bool trajectoryTooRisky(const Trajectory &traj) const; 
    }; 
}