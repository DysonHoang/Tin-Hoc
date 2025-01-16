#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, s = 0, b = 0, c = 0;
vector<int> a;

bool check(int n)
{
    int sum = 0, d = 0;
    for (int x : a)
    {
        sum += x;
        if (sum == n)
        {
            sum = 0;
            d++;
        }
        else if (sum > n)
            return false;
    }
    if (d > b)
    {
        b = d;
        c = n;
    }
    return true;
}

main()
{
    cin >> n;
    a.resize(n);
    for (int &x : a)
    {
        cin >> x;
        s += x;
    }

    for (int i = 1; i <= s; i++)
    {
        if (s % i == 0)
            check(i);
    }

    cout << b << " " << c << "\n";
    int sum = 0;
    for (int x : a)
    {
        sum += x;
        cout << x << " ";
        if (sum == c)
        {
            cout << "\n";
            sum = 0;
        }
    }
    return 0;
}