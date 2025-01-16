// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

const int Mx = 3000000;
bool SNT[Mx + 5];
int d[Mx + 5];

bool check(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum % 5 == 0;
}

void sangnt()
{
    for (int i = 2; i <= Mx; i++)
    {
        SNT[i] = 1;
    }
    for (int i = 2; i <= sqrt(Mx); i++)
    {
        if (SNT[i])
        {
            for (int j = i * i; j <= Mx; j += i)
            {
                SNT[j] = 0;
            }
        }
    }

    for (int i = 2; i <= Mx; i++)
    {
        if (SNT[i] && check(i))
        {
            d[i] = 1;
        }
    }

    for (int i = 1; i <= Mx; i++)
    {
        d[i] += d[i - 1];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if (fopen("CAU5B.INP", "r"))
    {
        freopen("CAU5B.INP", "r", stdin);
        freopen("CAU5B.OUT", "w", stdout);
    }
    sangnt();
    int Q;
    cin >> Q;
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        cout << d[r] - d[l - 1] << "\n";
    }

    return 0;
}
