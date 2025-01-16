#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    string sA = to_string(A);
    string sB = to_string(B);

    long long result = 0;
    for (int i = 0; i < sA.length(); ++i)
    {
        for (int j = 0; j < sB.length(); ++j)
        {
            result += (sA[i] - '0') * (sB[j] - '0');
        }
    }

    cout << result << endl;

    return 0;
}
