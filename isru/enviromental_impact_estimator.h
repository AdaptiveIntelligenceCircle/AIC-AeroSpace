#pragma once 

#include "extraction_planner.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class EnviromentalImpactEstimator 
    {
        public: 
        double estimateImpact(const ExtractionPlan &plan) const; 

        private: 

        double surfaceDisturbance(const ExtractionPlan &plan) const;

        double contaminationRisk(const ExtractionPlan &plan) const; 
    }; 
}