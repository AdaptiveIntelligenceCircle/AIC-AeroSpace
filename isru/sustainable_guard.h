#pragma once 

#include "extraction_planner.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class SustainabilityGuard 
    {
        public:
        bool validate(const ExtractionPlan &plan) const; 

        void setMaxExtractionRate(double rate); 

        private: 
        double max_extraction_rate = 5.0; 
    }; 
}