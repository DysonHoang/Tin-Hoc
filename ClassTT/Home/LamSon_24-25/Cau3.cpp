#include <bits/stdc++.h>
#include <string>
using namespace std;
int a[100000];
//?
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        long long dem = 2;
        int a, b, N;
        cin >> a >> b >> N;
        const int a1 = a, b1 = b;
        for (int i = 1; i <= 100000; i++)
        {
            a = a1 * i;
            dem++;
            b = b1 * i;
            dem++;
            if (a == b)
            {
                dem = dem - 1;
            }
            if (dem > N)
            {
                cout << a;
                break;
            }
            else if (dem == N)
            {
                cout << b;
                break;
            }
        }
    }
}
