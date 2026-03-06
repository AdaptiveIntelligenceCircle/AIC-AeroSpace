#pragma once 

#include "../core/mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class ConstraintModel 
    {
        public: 
        bool validate(const MissionState &state) ;

        void setMaxRisk(double value); 
        void setMinFuel(double value); 

        private: 
        double max_risk_ = 0.85; 
        double min_fuel_ = 5.0; 
    }; 
}