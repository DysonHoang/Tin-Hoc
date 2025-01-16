#include <bits/stdc++.h>
using namespace std;
int main ()
{
    if(fopen("Cau21.inp","r"))
    {
        freopen("Cau21.inp","r",stdin);
        freopen("Cau21.out","w",stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin,s);
    float d = 0;
    string s;
    getline (cin, s);
    if (s[0] == 'A' || s[0] == 'a')
    {
        d += 1;
    }
    for (int i = 0; i <= s.size () - 1; i++)
    {
        if (s[i] == ' '
    {
        if (s[i + 1] == 'A' || s[i + 1] == 'a')
                d += 1;
        }
    }
  cout << d;
}
