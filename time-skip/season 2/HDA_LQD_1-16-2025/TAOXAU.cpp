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

    string X;
    cin >> X;

    deque<char> dq;
    bool check = true;
    if (X.size() % 2 == 1)
    {
        for (char c : X)
        {
            if (check)
            {
                dq.push_front(c);
            }
            else
            {
                dq.push_back(c);
            }
            check = !check;
        }
    }
    else
    {
        for (char c : X)
        {
            if (check)
            {
                dq.push_back(c);
            }
            else
            {
                dq.push_front(c);
            }
            check = !check;
        }
    }
    for (char c : dq)
    {
        cout << c;
    }
}
