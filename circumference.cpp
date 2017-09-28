
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    // declare r and circumference as type double
    double r;
    double circumference;
    // ask user to input radius and store it under variable r
    cout << "Hello, please enter the value of your circle's radius: ";
    cin >> r;
    // calculate circumference
    circumference=2*M_PI*r
    // Output result
    cout << "Circumference= " << circumference << endl;
    return 0;
}
