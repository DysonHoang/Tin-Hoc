#include <bits/stdc++.h>

using namespace std;

int main()
{int n,k,s=0,dem=0;
cin>>n>>k;
    while(n>s)
    {
        s=s+k;
        k=k*2;
    }
    dem++;
    cout << dem<< endl;
    return 0;
}
