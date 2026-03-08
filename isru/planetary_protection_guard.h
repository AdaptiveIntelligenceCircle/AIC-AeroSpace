#pragma once 

#include "extraction_planner.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class PlanetaryProtectionGuard 
    {
        public: 
        bool validate(const ExtractionPlan &plan) const; 

        void setMaxSurfaceDisturbance(double value); 
        void setMaxContaminationRisk(double value);
        
        private: 
        double estimateSurfaceDisturbance(const ExtractionPlan &plan) const; 
        double estimateContaminationRisk(const ExtractionPlan &plan) const; 

        double max_surface_disturbance_ = 10.0; 
        double max_contamination_risk_ = 0.5;  
    }; 
}