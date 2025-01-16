#include <bits/stdc++.h>
using namespace std;

float calSum(int N, float X)
{
float S = 0, T1 = 1, T2 = 0;

    for (int i = 1; i <= N; i++)
    {
        T1 = T1 * X;
        T2 = T2 + i;
        S = S + (float)T1 / T2;
    }
    return S;
}

int main()
{
    int N;
    float X;
    cout << "N = ";;
    cin >> N;
    cout << "X = ";;
    cin >> X;

        cout<<"S(n)= "<<calSum(N,X)<<endl;
    return 0;
}
