#include "resource_model.h"
using namespace std; 

namespace aic :: Aerospace
{
    ResourceModel :: ResourceModel()
    {
        resource_.type = "Unknown";
        resource_.quantity = 0.0; 
        resource_.extraction_cost = 0.0;  
    }

    void ResourceModel :: setResource(const ResourceNode &node)
    {
        resource_ = node; 
    }

    const ResourceNode &ResourceModel :: getResource() const  
    {
        return resource_; 
    }

    double ResourceModel :: estimateAvailability() const 
    {
        if(resource_.extraction_cost <= 0)
        return 0; 

        return resource_.quantity/ resource_.extraction_cost; 
    }
}