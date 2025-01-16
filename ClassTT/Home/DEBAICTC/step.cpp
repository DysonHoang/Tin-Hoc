#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool bt(int x)
{
    int du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}

int main()

{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (bt(x))
            cout << "YES"<<"\n";
        else
           cout << "NO"<<"\n";
    }
}