#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    map<int, int> count;

    for (int i = 0; i < N; i++)
    {
        int length;
        cin >> length;
        count[length]++;
    }
    vector<int> usable_lengths;
    for (auto &entry : count)
    {
        if (entry.second >= 2)
        {
            usable_lengths.push_back(entry.first);
        }
    }

    sort(usable_lengths.rbegin(), usable_lengths.rend());

    long long max_area = 0;
    int first_side = 0;

    for (int length : usable_lengths)
    {
        if (count[length] >= 4)
        {
            max_area = max(max_area, (long long)length * length);
        }
        if (first_side == 0)
        {
            first_side = length;
        }
        else
        {
            max_area = max(max_area, (long long)first_side * length);
            first_side = 0;
        }
    }

    cout << max_area << endl;
    return 0;
}
