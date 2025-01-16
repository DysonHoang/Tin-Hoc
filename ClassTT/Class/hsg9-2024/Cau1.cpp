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
    ll n;
    cin >> n;
    ll steps = 0;
    if (n >= 500)
    {
        while (n > 0)
        {
            n -= 500;
            steps++;
            if (n < 0)
            {
                steps++;
                cout << steps;
                return 0;
            }
        }
    }
    if (n >= 200 && n < 500)
    {
        while (n > 0)
        {
            n -= 200;
            steps++;
            if (n < 0)
            {
                steps++;
                cout << steps;
                return 0;
            }
        }
    }
    if (n >= 100 && n < 200)
    {
        while (n > 0)
        {
            n -= 100;
            steps++;
            if (n < 0)
            {
                steps++;
                cout << steps;
                return 0;
            }
        }
    }
    if (n >= 50 && n < 100)
    {
        while (n > 0)
        {
            n -= 50;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    if (n >= 20 && n < 50)
    {
        while (n > 0)
        {
            n -= 20;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    if (n >= 10 && n < 20)
    {
        while (n > 0)
        {
            n -= 10;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    if (n >= 5 && n < 10)
    {
        while (n > 0)
        {
            n -= 5;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    if (n >= 2 && n < 5)
    {
        while (n > 0)
        {
            n -= 2;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    if (n >= 1 && n < 2)
    {
        while (n > 0)
        {
            n -= 1;
            steps++;
        }
        if (n < 0)
        {
            steps++;
            cout << steps;
            return 0;
        }
    }
    cout << steps;
}