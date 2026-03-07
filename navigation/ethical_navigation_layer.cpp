#include "ethical_navigation_layer.h"
using namespace std; 

namespace aic :: Aerospace
{
    bool EthicalNavigationLayer ::validate(const MissionState &state, const Trajectory &traj) const 
    {
        if (trajectoryTooRisky(traj))
        return false; 

        return true; 
    }

    bool EthicalNavigationLayer :: trajectoryTooRisky(const Trajectory &traj) const 
    {
        if (traj.risk > 0.8) return true; 

        return false; 
    }
}