#pragma once 

#include "rollback_manager.h"
using namespace std; 

namespace aic :: Aerospace 
{
    void RollbackManager :: snapshot(const MissionState &state)
    {
        last_safe_state_ = state; 
        has_snapshot_ = true; 
    }

    void RollbackManager :: rollback(MissionState &state)
    {
        if (has_snapshot_)
        {
            state = last_safe_state_; 
        }
    }
}