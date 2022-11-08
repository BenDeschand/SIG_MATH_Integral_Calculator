#include <string>

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
};