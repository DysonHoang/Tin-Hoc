// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll max1 = INT_MIN;
bool SNT[Mx + 7];
void sangnt()
{
    SNT[0] = SNT[1] = 1;
    for (int i = 2; i <= Mx; i++)
    {
        if (SNT[i] == 0)
        {
            for (int j = i * 2; j <= Mx; j += i)
            {
                SNT[j] = 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    string s;
    vector<ll> v;
    cin >> s;
    ll num = 0;
    ll digit_count = 0;
    for (char d : s)
    {
        if (d >= '0' && d <= '9')
        {
            num = num * 10 + d - '0';
            digit_count++;
        }
        else
        {
            if (num > 0)
            {
                v.push_back(num);
                num = 0;
            }
        }
    }
    if (num > 0)
    {
        v.push_back(num);
        num = 0;
    }
    ll max1 = INT_MIN;
    cout << digit_count << "\n";
    for (int i = 0; i < v.size(); i++)
    {
        if (SNT[v[i]] == 0 && max1 <)
        {
            cout << v[i] << " ";
        }
    }
}
