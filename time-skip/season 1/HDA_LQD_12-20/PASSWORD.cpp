// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
long long tcs(long long n)
{
    long long res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}
bool SNT[Mx + 7];
void sangnt()
{
    SNT[0] = SNT[1] = 0;
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i * i <= Mx; i++)
    {
        if (SNT[i])
        {
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    ll a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (SNT[tcs(i)]&&SNT[i])
            cout << i << " ";
    }
    
}