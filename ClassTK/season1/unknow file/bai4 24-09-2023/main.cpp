#include <bits/stdc++.h>

using namespace std;
float a,hoahoa;
int main()
{   cin>>a;
    if(a>100)
        {
            hoahoa=0.05*a;
        cout<<hoahoa;
        }

    if(a>=300)
       {
           hoahoa = 0.2*a;
        cout<<hoahoa;
       }
    if(a<300&&a>90)
        {
            hoahoa= 0,1*a;
        cout<<hoahoa;
        }
    return 0;
}
