#pragma once 
#include <memory> 

#include "mission_state.h"
#include "adaptation_controller.h"

#include "safety_supervisor.h"
#include "rollback_manager.h"

#include <iostream> 
using namespace std; 

namespace aic :: Aerospace 
{
    class AerospaceKernel
    {
        public: 
        AerospaceKernel();

        void initialize();
        void tick(double delta_time); 
        void shutdown(); 

        MissionState &getMissionState(); 

        private: 
        MissionState mission_state_; 
        AdaptationController adaptation_controller_; 
        SafetySupervisor safety_supervisor_; 
        RollbackManager rollback_manager_; 

        bool initialized_; 
    }; 
}