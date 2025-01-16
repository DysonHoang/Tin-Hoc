#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];
int tcs(int x)
{
    int t=0, du;
    while(x>0)
    {
        du=x%10;
        t=t+du;
        x=x/10;
    }
    return t;
}

bool scp(int x)
{
    int tg = sqrt(x);
    return tg * tg == x;
}

int main()
{
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(scp(tcs(n)))
    cout<<"YES";
    else 
    cout<<"NO";
}