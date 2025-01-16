#include <bits/stdc++.h>
using namespace std;
int tcs(int x)
{
    int t = 0, du;
    while (x > 0)
    {
        du = x % 10;
        t = t + du;
        x = x / 10;
    }
    return t;
}
int dcs(int x)
{
    int dem = 0;
    while (x > 0)
    {
        dem++;
        x = x / 10;
    }
    return dem;
}
int main()
{
    long long N;
    cin >> N;

    cout<<(N)*(N+1)/2;
}