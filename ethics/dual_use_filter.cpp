#include "dual_use_filter.h"
using namespace std; 

namespace aic :: Aerospace 
{
    bool DualUseFilter :: detectMisuse(const MissionState &state) const 
    {
        if (suspiciousVelocity(state))
        return true; 

        return false; 
    }

    bool DualUseFilter :: suspiciousVelocity(const MissionState &state) const 
    {
        if (state.velocity > 100000) // arbirtary threshold example.. 
        return true; 

        return false;
    }
}