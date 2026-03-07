#include "trajectory_planner.h"
using namespace std; 

namespace aic :: Aerospace 
{
    Trajectory TrajectoryPlanner :: computeTrajectory(const MissionState & state) const 
    {
        Trajectory t; 

        t.dx = state.velocity * 0.1; 
        t.dy = state.velocity * 0.05; 

        t.risk = state.risk_level; 

        return t; 
    }
}