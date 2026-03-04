#pragma once 

#include <string> 

using namespace std; 

namespace aic :: Aerospace 
{
    struct MissionState
    {
        double position_x = 0.0; 
        double position_y = 0.0; 
        double velocity = 0.0; 

        double fuel_remaining = 100.0; 
        double risk_level = 0.0; 

        double autonomy_level = 0.5; 

        string status = "IDLE"; 
    };
}