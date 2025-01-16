#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;
    int A[N];

    for (int i = 1; i <= N; ++i)
    {
        cin >> A[i];
    }

    int max_files = 0;
    for (int i = 1; i <= N; ++i)
    {
        int sum = 0;
        for (int j = i; j <= N; ++j)
        {
            sum += A[j];
            if (sum > S)
            {
                break;
            }
            max_files = max(max_files, j - i + 1);
        }
    }

    cout << max_files << endl;
    return 0;
}
