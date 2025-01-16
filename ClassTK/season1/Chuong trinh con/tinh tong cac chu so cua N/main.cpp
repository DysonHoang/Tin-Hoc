#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{bool ok=1;
   int t=0,n,du;
   cin>>n;
while (n>0)
{

    du=n%10;
    n=n/10;
    if(du<=n%10)
    {
        ok=0;
        break;
    }
}
    if(ok==1)
        cout<<"la so bac thang";
        else
        cout<<"ko la so bac thang";

    return 0;
}
