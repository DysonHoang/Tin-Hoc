#include <bits/stdc++.h>
using namespace std;
string s1, s2, s3;
main()
{
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    while (s3.find(s1) != -1)
    {
        int m = s3.find(s1);
        s3.replace(m, s1.size(), s2);
    }
    cout << s3;
    return 0;
}