#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
int a[1000000], b[1000000];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int timeAn = 0, timeBinh = 0;
    int countAn = 0, countBinh = 0;
    int left = 0, right = n - 1;

    while (left <= right)
    {
        if (timeAn <= timeBinh)
        {
            timeAn += a[left];
            left++;
            countAn++;
        }
        else
        {
            timeBinh += a
            [right];
            right--;
            countBinh++;
        }
    }

    cout << countAn << " " << countBinh << endl;
}