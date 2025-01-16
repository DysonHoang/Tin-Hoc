#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int turn = 0;

        while (!a.empty())
        {
            int max1 = a[0];
            int max_index = 0;
            for (int i = 1; i < a.size(); i++)
            {
                if (a[i] > max1)
                {
                    max1 = a[i];
                    max_index = i;
                }
            }

            a.erase(a.begin() + max_index, a.end());

            turn = 1 - turn;
        }

        if (turn == 1)
        {
            cout << "BOB\n";
        }
        else
        {
            cout << "ANDY\n";
        }
    }

    return 0;
}
