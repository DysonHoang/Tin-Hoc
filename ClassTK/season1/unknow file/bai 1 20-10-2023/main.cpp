#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int t=0;
    float a,b,k;
    printf("Quan bi gay, bi tri ");
    cin>>a>>b>>k;
    while(a<=5)
    {
        a=a+a*k/100;
        t=t+1;
    }
    cout <<t<< endl;
    return 0;
}
