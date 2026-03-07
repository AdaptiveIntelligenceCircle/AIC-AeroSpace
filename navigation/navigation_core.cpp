#include "navigation_core.h"
using namespace std; 

#include <iostream>
#include <cmath> 

namespace aic :: Aerospace
{
    void NavigationCore :: update(MissionState &state, double delta_time)
    {
        auto trajectory = planner_.computeTrajectory(state); 

        if (hazard_detector_.detect(state, trajectory))
        {
            return; 
        }

        if (!ethical_layer_.validate(state, trajectory))
        {
            return; 
        }

        if(human_override_.overrideActive())
        {
            trajectory = human_override_.getOverrideTrajectory();
        }

        state.position_x += trajectory.dx *delta_time; 
        state.position_y += trajectory.dy *delta_time; 
    }
}