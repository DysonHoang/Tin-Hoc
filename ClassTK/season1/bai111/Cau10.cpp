#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[100000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        int sc = k * (k + 1) / 2;
        int tong = (sc + 1) * sc / 2;
        cout << tong << "\n";
    }
}