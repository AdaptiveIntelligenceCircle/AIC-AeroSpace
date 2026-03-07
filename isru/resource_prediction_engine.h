#pragma once 

#include <vector> 
#include <string> 

#include "resource_model.h"
using namespace std; 

namespace aic :: Aerospace 
{
    struct ResourcePrediction 
    {
        string resource_type; 
        double probability; 
        double estimated_quantity; 
    }; 

    class ResourcePredictionEngine 
    {
        public: 
        ResourcePredictionEngine(); 

        void addObservation(const ResourceNode &observation); 

        vector<ResourcePrediction> predict() const; 

        private: 
        vector<ResourceNode> observations_; 
        double estimateProbability(const ResourceNode &node) const; 
    }; 
}