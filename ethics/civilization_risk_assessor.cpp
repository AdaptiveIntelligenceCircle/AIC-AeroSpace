#include "civilizational_risk_asessor.h"
using namespace std; 

#include <iostream>
#include <cmath> 

namespace aic :: Aerospace 
{
    double CivilizationRiskAssessor :: assess(const MissionState &state) const 
    {
        double orbital = orbitalInstabilityRisk(state); 
        double debris = debrisRisk(state); 

        return (orbital + debris) / 2.0; 
    }

    double CivilizationRiskAssessor :: orbitalInstabilityRisk(const MissionState &state) const 
    {
        return state.risk_level; 
    }

    double CivilizationRiskAssessor :: debrisRisk(const MissionState &state) const 
    {
        if (state.velocity > 50000)
        {
            return 0.8; 
        }
        return 0.2; 
    }
}