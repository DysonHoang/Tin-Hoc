#include <bits/stdc++.h>
using namespace std;
bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int sumOfPrimes(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (ktnt(i))
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int sum = sumOfPrimes(n);
    if (ktnt(sum))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
