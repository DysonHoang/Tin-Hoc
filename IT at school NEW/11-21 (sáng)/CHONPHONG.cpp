#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int a[100000];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            a[count] = i;
            count++;
        }
    }

    int low = 0, high = n, result = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        bool check = false;

        for (int i = 0; i + k < count; i++)
        {
            int left = a[i];
            int right = a[i + k];
            int center = a[i + k / 2];
            if (max(center - left, right - center) <= mid)
            {
                check = true;
                break;
            }
        }

        if (check)
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << result;
}
