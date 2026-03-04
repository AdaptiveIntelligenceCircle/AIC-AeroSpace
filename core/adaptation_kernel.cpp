#include "aerospace_kernel.h"
#include <iostream>

namespace aic :: Aerospace 
{
    AerospaceKernel :: AerospaceKernel()
    : initialized_(false){}

    void AerospaceKernel :: initialize()
    {
        rollback_manager_.snapshot(mission_state_); 
        initialized_ = true; 
        cout <<"Kernel - Initialized" << endl; 
    }

    void AerospaceKernel :: tick(double delta_time)
    {
        if (!initialized_) return ; 

        adaptation_controller_.update(mission_state_, delta_time); 

        if (!safety_supervisor_.validate(mission_state_))
        {
            cout <<"Kernel safety violation detected. Rolling back" << endl; 
            rollback_manager_.rollback(mission_state_); 
            return; 
        }

        rollback_manager_.snapshot(mission_state_); 
    }

    void AerospaceKernel :: shutdown()
    {
        initialized_ = false; 
        cout <<"Kernel - Shutdown" << endl;
    }

    MissionState &AerospaceKernel :: getMissionState()
    {
        return mission_state_; 
    }
}