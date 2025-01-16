#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N;
    cin >> N;
    string strN = to_string(N);
    char first_digit = strN[0];
    if ((first_digit - '0') % 2 == 0)
    { // Chẵn
        cout << "YES" << endl;
    }
    else
    { // Lẻ
        cout << "NO" << endl;
    }

    return 0;
}
