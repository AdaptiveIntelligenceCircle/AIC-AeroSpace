#pragma once 
#include "../core/mission_state.h"

#include "constraint_model.h"
#include "dual_use_filter.h"

#include "civilizational_risk_asessor.h"
#include "explainability_logger.h"

#include <iostream> 
using namespace std; 

namespace aic :: Aerospace 
{
    class EthicsEngine 
    {
        public: 
        EthicsEngine(); 

        bool evaluate(const MissionState &state); 
        void setConstraintModel(const ConstraintModel &model);

        private: 
        ConstraintModel constraint_model_; 
        DualUserFilter dual_use_filter_; 
        CivilizationsRiskAssessor risk_assessor_; 
        ExplainabilityLogger logger_; 

    }; 
}