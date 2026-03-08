#include "planetary_protection_guard.h"

using namespace std ; 

namespace aic :: Aerospace 
{
    bool PlanetaryProtectionGuard :: validate(const ExtractionPlan &plan) const
    {
        double disturbance = estimateSurfaceDisturbance(plan);
        double contamination = estimateContaminationRisk(plan); 

        if (disturbance > max_surface_disturbance_)
        return false; 

        if (contamination > max_contamination_risk_)
        return false; 

        return true; 
    }

    void PlanetaryProtectionGuard :: setMaxSurfaceDisturbance(double value)
    {
        max_surface_disturbance_ = value; 
    }

    void PlanetaryProtectionGuard::setMaxContaminationRisk(double value) 
    {
        max_contamination_risk_ = value;
    }

    double PlanetaryProtectionGuard :: estimateSurfaceDisturbance(const ExtractionPlan &plan) const 
    {
        return plan.extraction_rate *0.2; 
    }

    double PlanetaryProtectionGuard ::estimateContaminationRisk(const ExtractionPlan &plan) const 
    {
        if (plan.energy_cost > 800)
        return 0.7; 

        return 0.3; 
    }
}