#pragma once 

#include "mission_state.h"
using namespace std; 

namespace aic :: Aerospace 
{
    class AdaptationController 
    {
        public: 
        void update(MissionState &state, double delta_time); 
        void setLearningRate(double rate); 

        double getLearningRate() const; 

        private: 
        double learning_rate_ = 0.01; // Bounded adaptation..  
    };     
}