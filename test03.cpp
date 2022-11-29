#include "integral.h"
#include <iostream>
using namespace std;

int main() {
    IntegCal calc("sin(2x)sin(2x)", "x");
    for (int x : calc.findingSinFunction("sin(2x)sin(2x)")) {
        cout << x << " ";
    }
    cout << endl;

}