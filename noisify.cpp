#include <iostream>
//include outside library for rand function
#include <stdlib.h>
using namespace std;
int main()
{
    double x2[10],a,b;
// create x array
int i;
int x[10]={1,2,3,4,5,6,7,8,9,10};
//seed the randomizer so you dont get the same random numbers every time
srand(time(NULL));
//create loop to iterate through values and add or subtract .25
for (i=0;i<=9;i++){
//remainder function to create random 0's and 1's
    a=rand() %2;

// conditional to either add or subtract .25
    if (a==0)
        x2[i]=i+1.25;
    else if (a==1)
        x2[i]=i+.75;

}
// display method loops
    for (int i=0; i<=9; i++)
        cout << x[i] << "\t";
        cout << "\n";
    for (int i=0; i<=9; i++)
        cout << x2[i] << "\t";

}
