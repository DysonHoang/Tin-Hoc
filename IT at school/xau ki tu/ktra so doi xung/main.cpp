#include <bits/stdc++.h>

using namespace std;
string st;

int main()
{
    getline(cin,st);
    for(int i=0; i<=st.size()-1; i++)
    {
        if(st[i]!=st[st.size()-1-i])
    cout<<"0";
    }
       cout<<"1";
    return 0;
}
