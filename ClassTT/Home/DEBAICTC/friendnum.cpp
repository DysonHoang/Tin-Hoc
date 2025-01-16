#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
int tonguoc(int x)
{
    int t = 0;
    for (int i = 1; i <= x / 2; i++)
        if (x % i == 0)
            t = t + i;
    return t ;
}

int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int a, b;
    cin >> a >> b;
    if (tonguoc(a) == b)
        cout << "YES";
    else
        cout << "NO";
}