#pragma once 

#include "trajectory_planner.h"
using namespace std;

namespace aic :: Aerospace 
{
    class HumanOverrideInterface
    {
        public:
        bool overrideActive() const; 

        void setOverrideTrajectory(const Trajectory &traj); 
        Trajectory getOverrideTrajectory() const; 

        private:
        bool override_active_ = false; 
        Trajectory override_traj_; 
    };
}