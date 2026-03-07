#include "extraction_planner.h"
using namespace std; 

namespace aic :: Aerospace 
{
    ExtractionPlan ExtractionPlanner :: planExecution(const ResourceModel &model) const 
    {
        ExtractionPlan plan; 

        const auto &node = model.getResource(); 

        plan.extraction_rate = node.quantity * 0.01; 
        plan.energy_cost = computeEnergyCost(node); 

        return plan; 
    }
}