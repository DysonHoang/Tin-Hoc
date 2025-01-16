// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n, M;
    cin >> n >> M;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;
    int left = 0;
    long long count = 0;

    for (int right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum > M && left <= right)
        {
            sum -= a[left];
            left++;
        }
        count += (right - left + 1);
    }

    cout << count;
    return 0;
