#include "safety_supervisor.h"
using namespace std; 

namespace aic :: Aerospace 
{
    bool SafetySupervisor :: validate(const MissionState &state) const 
    {
        if (state.risk_level > max_risk_)
        {
            return false; 
        }

        if (state.fuel_remaining < min_fuel_)
        {
            return false; 
        }
        return true; 
    }

    void SafetySupervisor :: setMaxRisk(double max_risk)
    {
        max_risk_ = max_risk; 
    }

    void SafetySupervisor :: setMinRisk(double min_fuel)
    {
        min_fuel_ = min_fuel;
    }
}