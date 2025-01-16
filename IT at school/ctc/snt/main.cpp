#include <bits/stdc++.h>

using namespace std;
bool hh(int x)
{
    int t=0;
    for(int i=1; i<=x/2; i++)
        if(x%i==0)
            t=t+i;
    return t==x;
}

int main()
{int n;
cin>>n;
    if(hh(n))
        cout<<"la so hh";
    else
        cout<<"ko la so hh";

    return 0;
} x
