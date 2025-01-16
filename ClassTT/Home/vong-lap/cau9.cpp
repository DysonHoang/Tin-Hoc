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
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << "#";
        }
        cout<<endl;
    }
}
    