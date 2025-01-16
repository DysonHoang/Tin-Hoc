#include <bits/stdc++.h>
#include <string>

using namespace std;;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    int total=0;
    string s;    
    cin>>s;
    for(int i=0;i<=s.size()-1;i++)
        {
            if(s[i]>='1'&&s[i]<='9')
                {
                    total += s[i]-48;
                }
        }
    if(total%2==1)
        cout<<"Even"<<total;
    else
        cout<<"Odd"<<total;
}