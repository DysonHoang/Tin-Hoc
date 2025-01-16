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
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int Q;
    cin >> Q;

    while (Q--)
    {
        int x;
        cin >> x;
        int left = 0, right = N - 1;
        int lower = -1, upper = -1; 
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (a[mid] >= x)
            {
                upper = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1; 
            }
        }
        left = 0, right = N - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (a[mid] <= x)
            {
                lower = mid;
                left = mid + 1; 
            }
            else
            {
                right = mid - 1;
            }
        }

        int min1 = INT_MAX;
        if (upper != -1)
        { 
            min1 = min(min1, abs(a[upper] - x));
        }
        if (lower != -1)
        { 
            min1 = min(min1, abs(a[lower] - x));
        }
        cout << min1 << "\n";
    }

    return 0;
}
