#pragma once 
#include "../core/mission_state.h"

using namespace std;

namespace aic :: Aerospace 
{
    struct Trajectory 
    {
        double dx; 
        double dy; 
        double risk;
    };  

    class TrajectoryPlanner
    {
        public: 
        Trajectory computeTrajectory (const MissionState &state) const; 
    }; 
}