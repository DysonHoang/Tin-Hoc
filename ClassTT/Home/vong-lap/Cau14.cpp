
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define Mx 2000000000
#define ll long long
using namespace std;

bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;

    if (ktnt(n))
        cout << "YES";
    else
        cout << "NO";
}
