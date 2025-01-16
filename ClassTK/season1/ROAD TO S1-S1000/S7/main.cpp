#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{ float d=0;
cin>>n;
    for(int i=1; i<=n;i++)
        d=d+ (float) i/(i+1);
    cout <<d;
    return 0;
}
