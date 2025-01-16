#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int a[1000000], b[1000000];
bool cp(int x)
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
    int a, b;
    cin >> a >> b;
    cout << abs(__gcd(a, b));
}
