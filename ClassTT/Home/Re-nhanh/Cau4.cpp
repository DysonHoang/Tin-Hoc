#include <bits/stdc++.h>
using namespace std;
bool cp(int x)
{
    int tg = sqrt(x);
    return tg * tg == x;
}

int main()
{
    int a;
    cin >> a;
    if (cp(a))
        cout << "yes";
    else
        cout << "no";
}