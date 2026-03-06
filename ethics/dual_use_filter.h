#pragma once 

#include "../core/mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class DualUseFilter 
    {
        public: 
        bool detectMisuse(const MissionState &state) const; 
        private: 
        bool suspiciousVelocity(const MissionState &state) const;
    }; 
}