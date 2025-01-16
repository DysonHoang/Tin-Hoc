#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool cp(int x)
{
    int tg = sqrt(x);
    return tg * tg == x;
}

int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll T;
    cin >> T;
    while (T--)
    {
        ll x;
        cin >> x;
        if (x == 1 || cp(x))
            cout << "LE" << "\n";
        else
            cout << "YES" << "\n";
    }
}