#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[100] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[x]++;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
