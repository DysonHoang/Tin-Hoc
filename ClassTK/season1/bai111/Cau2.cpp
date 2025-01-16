#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];

int reverse_num(int x)
{
    int sodao = 0, du = 0;
    while (x > 0)
    {
        du = x % 10;
        sodao = sodao * 10 + du;
        x = x / 10;
    }
    return sodao;
}

int main()
{
    map<ll, ll> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    if (reverse_num(a) > reverse_num(b))
    cout<<reverse_num(a);
    else
    cout<<reverse_num(b);
}