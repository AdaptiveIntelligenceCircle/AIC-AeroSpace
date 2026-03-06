#include "explainability_logger.h"
using namespace std; 
#include <iostream>
namespace aic :: Aerospace 
{
    void ExplainabilityLogger :: logDecision(const string &message)
    {
        logs_.push_back(message); 
        cout << "ETHICS" << message << endl; 
    }

    const vector<string> &ExplainabilityLogger :: getLogs() const 
    {
        return logs_; 
    }
}