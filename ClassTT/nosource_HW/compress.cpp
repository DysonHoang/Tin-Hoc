#include <iostream>
using namespace std;

int compress(int K)
{
    int compress_count = 0;
    while (K != 2)
    {
        for (int i = 2;; i++)
        {
            if (K % i != 0)
            {
                K = i;
                compress_count++;
                break;
            }
        }
    }
    return compress_count;
}

int main()
{
    int A, B;
    cin >> A >> B;

    long long total_compress_count = 0;
    for (int K = A; K <= B; K++)
    {
        total_compress_count += compress(K);
    }

    cout << total_compress_count << endl;

    return 0;
}
