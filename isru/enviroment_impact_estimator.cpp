#include "enviromental_impact_estimator.h"
using namespace std; 

namespace aic :: Aerospace 
{
    double EnviromentalImpactEstimator :: estimateImpact(const ExtractionPlan &plan) const 
    {
        double disturbance = surfaceDisturbance(plan); 
        double contamination = contaminationRisk(plan); 

        return (disturbance + contamination) / 2.0; 
    }

    double EnviromentalImpactEstimator :: surfaceDisturbance(const ExtractionPlan &plan) const 
    {
        return plan.extraction_rate * 0.1; 
    }

    double EnviromentalImpactEstimator :: contaminationRisk(const ExtractionPlan &plan) const 
    {
        if (plan.energy_cost > 1000)
        return 0.7; 

        return 0.2;
    }
}