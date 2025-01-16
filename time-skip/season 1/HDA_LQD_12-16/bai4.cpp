// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
struct Game
{
    int start, end;
};
bool compare(const Game &a, const Game &b)
{
    return a.end < b.end;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<Game> games(n);
    for (int i = 0; i < n; i++)
    {
        cin >> games[i].start >> games[i].end;
    }
    sort(games.begin(), games.end(), compare);

    int count = 0, last_end = 0;

    for (int i = 0; i < n; i++)
    {
        if (games[i].start >= last_end)
        {
            count++;
            last_end = games[i].end;
        }
    }

    cout << count << endl;
    return 0;
}
