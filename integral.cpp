#include "integral.h"
#include <iostream>

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

// Find all the instances of a trig function in the equation
vector<int> IntegCal::findingTrigFunction(const string funcToFind, string eq) {
    const int lengthOfFuncToFind = funcToFind.length();
    string equationLeftToProcess = this->equation;
    vector<int> trigFuncInstances;
    int lengthProcessed = 0;
    while (equationLeftToProcess.length() != 0) {
        int startOfNextFunc = equationLeftToProcess.find(funcToFind);
        if (startOfNextFunc == -1) {
            break;
        } else {
            cout << startOfNextFunc << endl;
            int afterNextFuncInCurString = startOfNextFunc + lengthOfFuncToFind;
            trigFuncInstances.push_back(afterNextFuncInCurString + lengthProcessed);
            lengthProcessed += afterNextFuncInCurString;
            equationLeftToProcess = equationLeftToProcess.substr(afterNextFuncInCurString, string::npos);
            cout << equationLeftToProcess << endl;
        }
    }
    return trigFuncInstances;
}

vector<int> IntegCal::findingSinFunction(string eq) {
    findingTrigFunction("sin", eq);
}
vector<int> IntegCal::findingCosFunction(string eq) {
    findingTrigFunction("cos", eq);
}
vector<int> IntegCal::findingTanFunction(string eq) {
    findingTrigFunction("tan", eq);
}