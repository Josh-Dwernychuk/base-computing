#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{//define variables
double h, g;
h=1.5;
g=9.8;
//define x,y,v,a, and t
double x[1000],y[1000],t;
int i;
double v, a;
//request input from user
cout << "Please enter values for velocity and angle separated by a space:";
cin >> v >> a;
//loop to create time values
for (i=0 ; i<=999 ; i++)
{
    t=1.0/(i+1);
//trajectory equations
    x[i]=v*cos(a*(M_PI/180))*t;
    y[i]=h+v*sin(a*(M_PI/180))*t-.5*g*t*t;

//determines when ball hits the gound
    if (y[i]<=0){
    // displays when ball hits the ground to user
        cout << "The ball hits the ground at a distance of " << x[i] << " meters" << endl;
    break;
    }
}
}
