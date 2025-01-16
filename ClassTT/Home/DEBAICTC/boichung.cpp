#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    ll smt = (a * b) / __gcd(a, b);
    ll index;
    for (int i = 1; index < a * b; i++)
    {
        index = smt * i;
        cout << index << " ";
    }
}