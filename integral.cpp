#include "integral.h"


IntegCal::IntegCal() {
    equation = "";
    var = "";
}

IntegCal::IntegCal(string equation, string var) {
    this->equation = equation;
    this->var = var;
}

vector<int> IntegCal::findingDivision(string equation){
    char find = '/';
    vector<int> indexFound;

    for(int i = 0; i < equation.size(); i++){
        if(find == equation[i]){
            indexFound.push_back(i);
        }
    }
    return indexFound;
}

void IntegCal::setVar(string var) {
    this->var = var;
}

void IntegCal::setEq(string equation) {
    this->equation = equation;
}