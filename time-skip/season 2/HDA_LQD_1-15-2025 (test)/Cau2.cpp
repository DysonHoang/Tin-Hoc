// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string X, Y;
    cin >> X >> Y;
    set<char> setX(X.begin(), X.end());
    set<char> setY(Y.begin(), Y.end());
    set<char> result;
    for (char c : setX)
    {
        if (setY.find(c) != setY.end())
        {
            result.insert(c);
        }
    }

    for (char c : result)
    {
        cout << c << "\n";
    }

    return 0;
}
