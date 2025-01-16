// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

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

int main()
{
    sangnt();
    ll a, b;
    cin >> a >> b;
    int count = 0;
    for (int i = 2; i <= sqrt(b); i++)
    {
        if (SNT[i])
        {
            int dtich = i * i;
            if (dtich >= a && dtich <= b)
            {
                count++;
            }
        }
    }
    cout << count;
}
