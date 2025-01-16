#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];
int main()
{
    if (fopen("CAU4.INP", "r"))
    {
        freopen("CAU4.INP", "r", stdin);
        freopen("CAU4.OUT", "w", stdout);
    }
    map<string, int> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    sort(a, a + n, greater<int>());
    sort(b, b + n);
    for (int i = 0; i < k; i++)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
        else
            break;
    }

    ll tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += b[i];
    }
    cout << tong;
}