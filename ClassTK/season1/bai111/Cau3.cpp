#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];

int tonguoc(int x)
{
    int t = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
            t += i + (x / i);
        if (x == i * i)
            t -= i;
    }
    return t-x;
}

bool spp(int x)
{
    if(tonguoc(x)>x)
    return 1;
    else return 0;
    
}

    int main()
{
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(spp(n))
    cout<<"1";
    else cout<<"0";
}