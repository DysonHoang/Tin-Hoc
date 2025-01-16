#include <bits/stdc++.h>
using namespace std;
string st;
void chuanhoa()
{
    while(st[0]==' ')
        st.erase(0,1);
    while(st[st.size()-1]==' ')
        st.erase(st.size()-1,1);
    for(int i=0; i<=st.size()-1; i++)
        if(st[i]==' '&&st[i+1]==' ')
        {
            st.erase(i,1);
            i--;
        }
}
void inthuong()
{
    for(int i=0; i<=st.size()-1; i++)
    {
        if(st[i]>='A'&&st[i]<='Z')
            st[i]+=32;
    }
}
int main()
{

    getline(cin,st);
    chuanhoa();
    inthuong();
    for(int i=0; i<=st.size()-1; i++)
    {
        st[0]=toupper(st[0]);
    }
    for(int i=1; i<=st.size()-1; i++)
    {
        if(st[i]==' '&& st[i+1]!=' ')
            st[i+1]=toupper(st[i+1]);
    }
    cout<<st;
    return 0;
}
