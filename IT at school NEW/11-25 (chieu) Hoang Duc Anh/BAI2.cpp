// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 5000000
#define ll long long
using namespace std;

bool SNT[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
    {
        SNT[i] = 1;
    }
    for (int i = 2; i * i <= Mx; i++)
    {
        if (SNT[i])
        {
            for (int j = i * i; j <= Mx; j += i)
            {
                SNT[j] = 0;
            }
        }
    }
}

ll String_To_Num(const string &s)
{
    ll res = 0;
    for (char d : s)
    {
        res = res * 10 + (d - '0');
        if (res > Mx)
            break;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    sangnt();

    string s;
    cin >> s;

    ll max1 = 0;
    string nw = "";

    for (char d : s)
    {
        if (isdigit(d))
        {
            nw += d;
        }
        else
        {
            if (!nw.empty())
            {
                ll num = String_To_Num(nw);
                if (num <= Mx && SNT[num])
                {
                    max1 = max(max1, num);
                }
                nw.clear();
            }
        }
    }

    if (!nw.empty())
    {
        ll num = String_To_Num(nw);
        if (num <= Mx && SNT[num])
        {
            max1 = max(max1, num);
        }
    }

    cout << max1 << "\n";
    return 0;
}
