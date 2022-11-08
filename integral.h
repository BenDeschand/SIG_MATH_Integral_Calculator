#include <string>
#include <vector>

using namespace std;

class IntegCal {
    private: 
        string equation;
        string var;
    
    public:

        IntegCal();
        IntegCal(string equation, string var);

        void setVar(string var);
        void setEq(string equation);
        
        vector<int> findingDivision(string equation);

};