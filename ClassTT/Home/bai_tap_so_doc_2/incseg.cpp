#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    int n = A.size();
    if (n == 0)
        return 0;

    int max1 = INT_MIN;
    int index = 1;

    for (int i = 2; i <= n; i++)
    {
        if (A[i] >= A[i - 1])
        {
            index++;
        }
        else
        {
            max1 = max(max1, index);
            index = 1;
        }
    }

    max1 = max(max1, index);
    cout << max1;
}