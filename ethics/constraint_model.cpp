#include "constraint_model.h"
using namespace std; 

namespace aic :: Aerospace 
{
    bool ConstraintModel :: validate(const MissionState &state) 
    {
        if (state.risk_level > max_risk_)
        return false; 

        if (state.fuel_remaining < min_fuel_)
        return false;

        return true; 
    }

    void ConstraintModel :: setMaxRisk(double value)
    {
        max_risk_ = value; 
    }

    void ConstraintModel :: setMinFuel(double value)
    {
        min_fuel_ = value; 
    }
}