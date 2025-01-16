#include <bits/stdc++.h>
using namespace std;
#define kbc long long
#define Mx 10000000
bool ktnt(kbc x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

bool bt(kbc x)
{
    int du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}
int SNT[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
}
int sodao(int x)
{
    int dao = 0, du;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao;
}
bool sodx(int x)
{
    int dao = 0, du, x1 = x;
    while (x > 0)
    {
        du = x % 10;
        dao = dao * 10 + du;
        x = x / 10;
    }
    return dao == x1;
}

int main()
{
    kbc n;
    cin >> n;
    sangnt();
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int dem = 0;
        for (int i = a; i <= b; i++)
        {
            if (SNT[i] && sodx(i))
                dem += i;
        }
        cout << dem << "\n";
    }
}
