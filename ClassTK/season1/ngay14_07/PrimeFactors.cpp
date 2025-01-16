#include <bits/stdc++.h>
using namespace std;

int main()
{
    int index;
    cin >> index;
    while (index--)
    {
        int T;
        cin >> T;
        int count = 0;
        while (T % 2 == 0)
        {
            count++;
            T /= 2;
        }
        if (count > 0)
        {
            cout << 2 << " " << count << " ";
        }

        for (int i = 3; i * i <= T; i+=2)
        {
            count = 0;
            while (T % i == 0)
            {
                count++;
                T /= i;
            }
            if (count > 0)
            {
                cout << i << " " << count << " ";
            }
        }
        if (T > 2)
        {
            cout << T << " " << 1 << " ";
        }
        cout<<"\n";
    }
}
