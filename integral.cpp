#include "integral.h"


IntegCal::IntegCal() {
    equation = "";
    var = "";
}

IntegCal::IntegCal(string equation, string var) {
    this->equation = equation;
    this->var = var;
}

void IntegCal::setVar(string var) {
    this->var = var;
}

void IntegCal::setEq(string equation) {
    this->equation = equation;
}

vector<int> IntegCal::findingDivision(string eq) {
    char find = '/';
    vector<int> indexFound;

    for(int i = 0; i < eq.size(); i++){
        if(find == eq[i]){
            indexFound.push_back(i);
        }
    }
    return indexFound;
}

vector<int> IntegCal::findingAdd(string eq) {
    char find = '+';
    vector<int> indexFound;

    for(int i = 0; i < eq.size(); i++) {
        if(find == eq[i]) {
            indexFound.push_back(i);
        }

        return indexFound;
    }
}