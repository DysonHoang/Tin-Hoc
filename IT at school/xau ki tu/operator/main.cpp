#include <bits/stdc++.h>

using namespace std;

int main()
{int x=0,n;
string s;
{
cin>>s;
for(int i=1;i<=s.size()-1;i++)
{
    if(s[1]=='0')
        x--;
        else
        x++;
    }
    cout<<x;
}
}
