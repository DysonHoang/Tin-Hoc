#include <bits/stdc++.h>
#define Mx 100000000
#define ll long long
using namespace std;
map<int, int> mp;
int a[1000000];
int max1 = INT_MIN;
int min1 = INT_MAX;
bool isYear(int year)
{
    int digits[10] = {0};

    while (year > 0)
    {
        int digit = year % 10;
        if (digits[digit] > 0)
        {
            return false;
        }
        digits[digit]++;
        year /= 10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    n++;
    while (!isYear(n))
    {
        n++;
    }
    cout << n << endl;
}