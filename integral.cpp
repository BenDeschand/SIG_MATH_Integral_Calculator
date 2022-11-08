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