// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;
string s, a, ans;
ll k, pos, n;
void getFirst()
{
    char num = '0';
    for (int i = 0; i <= n - k; i++)
    {
        if (a[i] > num)
        {
            pos = i;
            num = a[i];
        }
    }
    ans = ans + num;
    k--;
}
void getNum()
{
    while (k > 0)
    {
        char num = char('0' - 1);
        pos++;
        for (int i = pos; i <= n - k; i++)
            if (a[i] > num)
            {
                num = a[i];
                pos = i;
            }
        ans = ans + num;
        k--;
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> k;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            a = a + s[i];
    n = a.size();
    getFirst();
    getNum();
    cout << ans;
}