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

        vector<int> findingDivision(string equation);

};