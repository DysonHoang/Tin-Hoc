#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int n;
    while (cin >> n)
    {
        int a[1000] = {0};

        for (int i = 2; i <= n; i++)
        {
            int num = i;
            for (int j = 2; j * j <= num; j++)
            {
                while (num % j == 0)
                {
                    a[j]++;
                    num /= j;
                }
            }
            if (num > 1)
            {
                a[num]++;
            }
        }

        for (int i = 2; i <= 999; i++)
        {
            if (a[i] > 0)
            {
                cout << a[i] << " ";
            }
        }

        cout << endl;
    }
}
