#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;
int a[1000000], b[1000000];

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;
    int number = 18;

    while (count < n)
    {
        number++;
        if (sumOfDigits(number) == 10)
            count++;
    }
    cout << number;
}