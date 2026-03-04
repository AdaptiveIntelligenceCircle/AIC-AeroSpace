#pragma once 

#include "mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class SafetySupervisor
    {
        public: 
        bool validate(const MissionState &state) const; 

        void setMaxRisk(double max_risk); 
        void setMinRisk(double min_fuel); 

        private:
        double max_risk_= 0.8; 
        double min_fuel_ = 5.0; 
    }; 
}