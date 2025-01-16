#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool nt(ll x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll new_size = n;
    ll count = 0;

    for (int i = 1; i <= new_size;)
    {
        if (nt(a[i]))
        {
            for (int j = i; j <= new_size; j++)
            {
                a[j] = a[j + 1];
            }
            new_size--;
            count++;
        }
        else
        {
            i++;
        }
    }

    if (count == n)
    {
        cout << "0" << endl;
        cout<< "NONE";
    }
    else
    {
        ll s = 0;

        for (int i = 1; i <= new_size; i++)
        {
            s += a[i];
        }
        cout << s << endl;

        for (int i = 1; i <= new_size; i++)
        {
            cout << a[i] << " ";
        }
    }
}
