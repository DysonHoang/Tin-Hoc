// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
string x, y = "";
int n;

void backtrack(ll i)
{
    if (i == n)
        return;
    if (i % 2 == 0)
    {
        y += x[i];
    }
    else
    {
        y = x[i] + y;
    }
    backtrack(i + 1);
}

int main()
{
    cin >> x;
    n = x.size();
    backtrack(0);
    if (n % 2 == 0)
    {
        cout << y;
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            cout << y[i];
        }
    }
}
