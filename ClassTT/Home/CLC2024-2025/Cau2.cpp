#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cp(int x)
{
    int tg = sqrt(x);
    return tg * tg == x;
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

    ll a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (cp(i) && ktnt(sqrt(i)))
        {
            count++;
        }
    }
    cout << count;
}