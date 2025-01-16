// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int ConvertInt(const string &x)
{
    int num = 0;
    for (char ch : x)
    {
        num = num * 10 + (ch - '0');
    }
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int NTL[256];
    NTL['N'] = 14;
    NTL['O'] = 16;
    NTL['H'] = 1;
    NTL['C'] = 12;

    string s;
    cin >> s;

    ll ans = 0;
    int n = s.size();

    for (int i = 0; i < n;)
    {
        char nto = s[i];
        i++;
        string st = "";
        while (i < n && isdigit(s[i]))
        {
            st += s[i];
            i++;
        }
        int index;
        if (st.empty())
        {
            index = 1;
        }
        else
        {
            index = ConvertInt(st);
        }  
        ans += NTL[nto] * index;
    }

    cout << ans;
    return 0;
}
