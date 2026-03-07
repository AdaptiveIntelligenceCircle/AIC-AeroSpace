#pragma once 
#include <vector> 

#include "resource_model.h"
#include "extraction_planner.h"

using namespace std; 

namespace aic :: Aerospace 
{
    struct SitePlan 
    {
        ResourceNode resource; 
        ExtractionPlan plan;
        double efficiency_score; 
    }; 

    class MultiSiteExtractionOptimizer 
    {
        public:
        vector<SitePlan> optimize(const vector<ResourceNode> &sites) const ;
        
        private: 
        double evaluateEfficiency(const ResourceNode &node) const; 
    }; 
}