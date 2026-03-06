#pragma once 

#include <string> 
#include <vector> 

using namespace std; 

namespace aic :: Aerospace 
{
    class ExplainabilityLogger 
    {
        public: 
        void logDecision(const string &message);

        const vector<string> &getLogs() const; 

        private:
        vector<string> logs_; 
    }; 
}