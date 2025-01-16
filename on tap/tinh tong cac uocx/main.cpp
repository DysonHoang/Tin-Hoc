#include <bits/stdc++.h>

using namespace std;
int tonguoc(int x)
{
    int t=0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0)
        t=t+i;
    return t+x;
}
int main()
{int a;
cin>>a;
    cout << tonguoc(a) << endl;
    return 0;
}
