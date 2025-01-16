#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b)
{
    return (a * b) / __gcd(a, b);
}

long long plcm(int nums[], int n)
{
    long long ans = nums[1];
    for (int i = 2; i <= n; ++i)
    {
        ans = lcm(ans, nums[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    long long lcmv = plcm(a, n);
    cout << lcmv << "\n";
    for (int i = 1; i <= n; ++i)
    {
        cout << lcmv / a[i] << " ";
    }
    cout << endl;

    return 0;
}
