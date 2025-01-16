#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    map<int, int> mp;

    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        int t1 = a[i] + K;
        int t2 = a[i] - K;
        if (mp.find(t1) != mp.end())
        {
            count += mp[t1];
        }
        if (mp.find(t2) != mp.end())
        {
            count += mp[t2];
        }

        mp[a[i]]--;
    }

    cout << count << endl;

    return 0;
}
