#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
int sodao(int x)
{
    int dao = 0, du;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao;
}
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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    if (ktnt(n) && ktnt(sodao(n)))
        cout << "1";
    else
        cout << "0";
}