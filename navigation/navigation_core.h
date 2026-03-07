#pragma once 
#include "trajectory_planner.h"
#include "hazard_detector.h"
#include "human_override_interface.h"

#include "ethical_navigation_layer.h"

#include "../core/mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class NavigationCore
    {
        public: 
        NavigationCore(); 

        void update(MissionState &state, double delta_time); 

        private: 
        TrajectoryPlanner planner_;
        HazardDetector hazard_detector_; 
        HumanOverrideInterface human_override_; 
        EthicalNavigationLayer ethical_layer_; 
    }; 
}