#include "hazard_detector.h"
using namespace std; 

namespace aic :: Aerospace 
{
    bool HazardDetector :: detect(const MissionState &state, const Trajectory &traj) const 
    {
        if (collisonRisk(traj))
        return true; 

        return false; 
    }

    bool HazardDetector :: collisonRisk(const Trajectory &traj) const 
    {
        if (traj.risk > 0.9)
        return true; 

        return false; 
    }
}