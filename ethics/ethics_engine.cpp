#include "ethics_engine.h"
using namespace std; 

namespace aic :: Aerospace
{
    EthicsEngine :: EthicsEngine(){}

    bool EthicsEngine :: evaluate(const MissionState &state)
    {
        if (!constraint_model_.validate(state))
        {
            logger_.logDecision("Constraint violation detected");
            return false; 
        }

        if (dual_use_filter_.detectMisuse(state))
        {
            logger_.logDecision("Potential dual use misuse detected."); 
            return false; 
        }

        double risk = risk_assessor_.assess(state); 

        logger_.logDecision("Civilizational risk score :" + to_string(risk));

        if (risk > 0.9) return false; 

        return true; 
    }

    void EthicsEngine :: setConstraintModel(const ConstraintModel &model)
    {
        constraint_model_ = model; 
    }
}