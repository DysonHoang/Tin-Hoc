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
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];

    for (int x = 0; x < N; x++)
    {
        int count = 0;
        for (int i = 0; i < x - 2; i++)
        {
            for (int j = i + 1; j < x - 1; j++)
            {
                for (int k = j + 1; k < x; k++)
                {
                    if (a[i] + a[j] + a[k] == a[x])
                    {
                        count++;
                    }
                }
            }
        }
        cout << count << " ";
    }

    return 0;
}