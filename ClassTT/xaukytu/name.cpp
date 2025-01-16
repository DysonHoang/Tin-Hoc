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
    string s;
    getline(cin, s);
    stringstream ss(s);
    string s1, result = "";
    bool check = true;

    while (ss >> s1)
    {

        s1[0] = toupper(s1[0]);
        for (int i = 1; i < s1.size(); i++)
        {
            s1[i] = tolower(s1[i]);
        }
        if (!check)
        {
            result += " ";
        }
        result += s1;
        check = false;
    }
    cout << result;
}
