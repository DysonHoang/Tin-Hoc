#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{ float d=0;
cin>>n;
    for(int i=1; i<=n;i++)
        d=d+ 1.0*(2*i+1)/(2*i+2);
    cout <<d;
    return 0;
}
