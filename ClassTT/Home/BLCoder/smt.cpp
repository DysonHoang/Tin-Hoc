#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool nt(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % 7 == 0)
            return false;
    }
    return true;
}

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int a[1000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<int, int> mp;
    for (int i = 1; i <= 5; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto &m1 : mp)
        cout << m1.first << " " << m1.second<<endl;
}
