#include "adaptation_controller.h"
using namespace std;
#include <algorithm>

namespace aic :: Aerospace 
{
    void AdaptationController :: update(
        MissionState &state, double delta_time
    )
    {
        double adjustment = learning_rate_ * delta_time ;
        state.velocity += adjustment; 
        state.fuel_remaining -= adjustment * 0.5; 

        state.risk_level = clamp(state.risk_level + adjustment * 0.1, 0.0, 1.0);

    }

    void AdaptationController :: setLearningRate(double rate)
    {
        learning_rate_ = clamp(rate, 0.0, 0.1); 
    }

    double AdaptationController ::getLearningRate() const 
    {
        return learning_rate_; 
    }
}