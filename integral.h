#include <string>
#include <vector>

using namespace std;

class IntegCal {
    private: 
        string equation;
        string var;
        vector<int> findingTrigFunction(const string funcToFind, string eq);


    
    public:

        IntegCal();
        IntegCal(string equation, string var);

        void setVar(string var);
        void setEq(string equation);
        
        vector<int> findingDivision(string eq);
        vector<int> findingAdd(string eq);
        vector<int> findingSinFunction(string eq);
        vector<int> findingCosFunction(string eq);
        vector<int> findingTanFunction(string eq);
        
        

};