#include <bits/stdc++.h>
#include <string>
#include <map>
#include <iostream>
#include <vector>
#define ll long long
#define Mx 1000000000
using namespace std;

int main()
{
    if (fopen("CAU3.INP", "r"))
    {
        freopen("CAU3.INP", "r", stdin);
        freopen("CAU3.OUT", "w", stdout);
    }
    map<string, int> mp;
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s, word;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i]=s[i]+32;  
            }
    }
    stringstream ss(s);
    while (ss >> word)
    {
        mp[word]++;
    }

    int max1 = INT_MIN;
    for (pair<string, int> it : mp)
    {

        if (it.second > max1)
        {
            max1 = it.second;
        }
    }
    cout << max1;
}