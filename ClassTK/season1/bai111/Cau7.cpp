#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];

bool pb(int x) {
    bool digits[10] = {false};
    while (x > 0) {
        int digit = x % 10;
        if (digits[digit]) {
            return false; 
        }
        digits[digit] = true;
        x /= 10;
    }
    return true; 
}

    int main()
    {
        int l, r;
        cin >> l>> r;
        for (int i = l; i <= r; i++)
        {
            if (pb(i))
                {
                    cout<<i;
                    break;
                }
        }
    }