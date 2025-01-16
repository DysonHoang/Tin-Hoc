#include <bits/stdc++.h>

using namespace std;
int a[100000];
int demuoc(int x)
{
    long long d = 0;
    for (int i = 1; i <= x / 2; i++)
        if (x % i == 0)
            d++;
    return d + 1;
}
bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int a, b;
        cin >> a >> b;
        int dem = 0;
        for (int i = a; i <= b; i++)
        {
            if (ktnt(demuoc(i)))
                dem++;
        }
        cout << dem << endl;
    }
}