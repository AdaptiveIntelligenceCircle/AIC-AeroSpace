#include "sustainable_guard.h"
using namespace std; 

namespace aic :: Aerospace 
{
    bool SustainabilityGuard :: validate(const ExtractionPlan &plan) const 
    {
        if (plan.extraction_rate > max_extraction_rate)
        {
            return false; 
        }

        return true; 
    }

    void SustainabilityGuard :: setMaxExtractionRate(double rate)
    {
        max_extraction_rate = rate; 
    }
}