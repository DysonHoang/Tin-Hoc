// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll queue1;
bool snt[10000005];
bool SNT[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
}
bool check(int n)
{
    if (n % 2 != 0 && SNT[n] && SNT[(n + 1) / 2])
        return 1;
    return 0;
}
int main()
{
    sangnt();
    cin >> queue1;
    while (queue1--)
    {
        ll l, r;
        cin >> l >> r;
        ll dem = 0;
        for (int i = l; i <= r; i++)
            if (check(i))
                dem++;
        cout << dem;
    }
}