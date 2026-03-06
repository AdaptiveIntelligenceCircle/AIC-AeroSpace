#pragma once 

#include "../core/mission_state.h"
using namespace std; 

namespace aic :: Aerospace
{
    class CivilizationRiskAssessor 
    {
        public:
        double assess(const MissionState &state) const; 

        private: 
        double orbitalInstabilityRisk(const MissionState &state) const; 
        double debrisRisk(const MissionState &state) const; 
    }; 
}