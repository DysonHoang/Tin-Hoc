#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    int n;
    long long K;
    cin >> n >> K;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int count = 0;
    unordered_map<long long, int> lcmCount;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            long long currentLcm = lcm(a[i], a[j]);
            if (currentLcm <= K)
            {
                count++;
            }
            else
            {
                break;
            }
        }
    }

    cout << count << endl;
    return 0;
}
