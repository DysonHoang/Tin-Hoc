// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n;
    string s;
    cin >> n;
    double max1 = 0;
    string ans = "";
    while (n--)
    {
        cin.ignore();
        cin >> s;
        ll sum = 0, count = 0;
        for (char d : s)
        {
            if (d >= '0' && d <= '9')
            {
                sum += d - '0';
                count++;
            }
        }
        if (count == 0)
        {
            continue;
        }
        double res = sum / count;

        if (max1 < res)
        {
            res = max1;
            ans = s;
        }
    }
    if (ans == "")
        cout << 0;
    else
        cout << ans;
}