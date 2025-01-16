 // Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int count(int n, int p)
{
    int count = 0;
    while (n % p == 0)
    {
        n /= p;
        count++;
    }
    return count;
}

int main()
{

    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int a, b, k;
    cin >> a >> b >> k;

    ll count2_A = count(a, 2);
    ll count5_A = count(a, 5);
    ll count2_B = count(b, 2);
    ll count5_B = count(b, 5);

    int total2 = count2_A + count2_B;
    int total5 = count5_A + count5_B;

    int index2 = max(0, k - total2);
    int index5 = max(0, k - total5);

    ll C = 1;
    for (int i = 0; i < index2; i++)
    {
        C *= 2;
    }
    for (int i = 0; i < index5; i++)
    {
        C *= 5;
    }

    cout << C << endl;
    return 0;
}
