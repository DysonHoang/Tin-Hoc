#include <bits/stdc++.h>
using namespace std;
string s,tmp;
int dem1=0,dem2=0;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            dem1++;
        }
        if(s[i]>='a'&&s[i]<='z')
        {
            dem2++;
        }
    }
    cout<<dem2<<" "<<dem1;

}
