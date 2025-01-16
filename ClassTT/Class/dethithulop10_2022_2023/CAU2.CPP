#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;

int main()
{
    if (fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT", "w", stdout);
    }
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    int k;
    cin >> s >> k;
    ll n=0;
    for (int i = 0; i < s.size(); i++)
    {
        n = (n * 10 + s[i] - '0') % k;
    }
    cout<<n;
}