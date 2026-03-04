#pragma once 

#include "mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class RollbackManager 
    {
        public: 
        void snapshot(const MissionState &state); 
        void rollback(MissionState &state); 

        private: 
        MissionState last_safe_state_; 
        bool has_snapshot_ = false; 
    }; 
}