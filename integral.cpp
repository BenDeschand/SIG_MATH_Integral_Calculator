#include "integral.h"



IntegCal::IntegCal() {
    equation = "";
    var = "";
}

IntegCal::IntegCal(string equation, string var) {
    this->equation = equation;
    this->var = var;
}