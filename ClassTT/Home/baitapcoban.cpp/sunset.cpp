// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000], b[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t; 
    while (t--)
    {
        int n;
        cin >> n;
        int A[100];
        set<int> s;
        bool valid = true;

        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            s.insert(A[i]);
        }
        if (s.size() == 1)
        {
            valid = false;
        }
        else
        {
            for (int x : s)
            {
                bool check = true;
                for (int i = 0; i < n; ++i)
                {
                    if (A[i] % x != 0)
                    {
                        check = false;
                        break;
                    }
                }
                if (check && x > 1)
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
    return 0;
}
