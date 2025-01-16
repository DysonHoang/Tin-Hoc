#include <bits/stdc++.h>
#define Mx 10000000
using namespace std;
bool SNT[Mx + 5];
void sangnt()
{
    for (int i = 2; i <= Mx; i++)
        SNT[i] = 1;
    for (int i = 2; i <= sqrt(Mx); i++)
        if (SNT[i])
            for (int j = i * i; j <= Mx; j += i)
                SNT[j] = 0;
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
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isSuperPrime(int n)
{
    while (n > 0)
    {
        if (!ktnt(n))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int a[Mx];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    long long x;
    cin>>x;
    sangnt();
    for (int i = 2; i <= x; i++)
    {
        if (SNT[i])
        {
            cout << i << " ";
        }
    }
}
