#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
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
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll n;
    while (cin >> n)
    {
        map<int, int> primeCount;
        for (int i = 2; i <= n; ++i)
        {
            int x = i;
            for (int p : SNT)
            {
                while (x % p == 0)
                {
                    primeCount[p]++;
                    x /= p;
                }
                if (x == 1)
                    break;
            }
        }

        bool check = true;
        for (auto &p : primeCount)
        {
            if (!check)
                cout << " ";
            cout << p.second;
            check = false;
        }
        cout << endl;
    }

    return 0;
}
