#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int t1 = 0, t2 = 0, n1 = n, dem = 0;
    for (int i = 1; i <= 2; i++)
    {
        t1 += n1 % 10;
        n1 = n1 / 10;
    }

    for (int i = 1; i <= 2; i++)
    {
        t2 += n1 % 10;
        n1 = n1 / 10;
    }

    if (t1 == t2)
        cout << "YES";
    else
        cout << "NO";
}