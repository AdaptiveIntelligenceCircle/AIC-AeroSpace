#pragma once 

#include <string> 
using namespace std; 

#include <iostream>

namespace aic :: Aerospace 
{
    struct ResourceNode 
    {
        string type; 
        double quantity; 
        double extraction_cost; 
    }; 

    class ResourceModel 
    {
        public: 
        ResourceModel(); 

        void setResource(const ResourceNode &node);
        const ResourceNode &getResource() const;
        
        double estimateAvailability() const; 

        private: 
        ResourceNode resource_; 
    }; 
}