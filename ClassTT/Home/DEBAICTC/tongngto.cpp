#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
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
    ll s = 0;
    if (2 <= n)
        s += 2;
    for (int i = 3; i <= n; i += 2)
    {
        if (ktnt(i))
        {
            s += i;
        }
    }
    cout << s;
}