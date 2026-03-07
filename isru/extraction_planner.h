#pragma once 
#include "resource_model.h"

#include <iostream>
#include <string> 

using namespace std; 

namespace aic :: Aerospace
{
    struct ExtractionPlan 
    {
        double extraction_rate; 
        double energy_cost; 
    }; 

    class ExtractionPlanner
    {
        public: 
        ExtractionPlan planExecution(const ResourceModel &model) const; 

        private: 
        double computeEnergyCost(const ResourceNode &node) const; 
    }; 
}