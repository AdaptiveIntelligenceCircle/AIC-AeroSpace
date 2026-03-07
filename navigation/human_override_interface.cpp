#include "human_override_interface.h"
using namespace std;

namespace aic :: Aerospace
{
    bool HumanOverrideInterface :: overrideActive() const 
    {
        return override_active_; 
    }

    void HumanOverrideInterface :: setOverrideTrajectory(const Trajectory &traj)
    {
        override_traj_ = traj; 
        override_active_ = true; 
    }

    Trajectory HumanOverrideInterface :: getOverrideTrajectory() const
    {
        return override_traj_;
    }
}