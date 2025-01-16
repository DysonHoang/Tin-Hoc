#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,t=0;
    cin>>n;
    for (int i=1;i<=n/2;i++)
        if(n%i==0)
            t=t+i;
    cout <<t+n<< endl;
    return 0;
}
