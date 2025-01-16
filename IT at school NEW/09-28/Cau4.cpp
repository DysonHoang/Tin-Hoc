#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("Cau4.INP", "r"))
    {
        freopen("Cau4.INP", "r", stdin);
        freopen("Cau4.OUT", "w", stdout);
    }
    string S;
    vector<string> a;
    string s1;

    getline(cin, S);
    stringstream ss(S);
    string word;
    int dem = 0;
    string longest;

    while (ss >> word)
    {
        if (!word.empty())
        {
            word[0] = toupper(word[0]);
        }
        a.push_back(word);
        dem++;
        s1 += word + ' ';

        if (word.length() > longest.length())
        {
            longest = word;
        }
    }

    if (!s1.empty())
    {
        s1.pop_back();
    }

    cout << s1 << "\n";
    cout << longest << endl;
    cout << dem << endl;

    return 0;
}
