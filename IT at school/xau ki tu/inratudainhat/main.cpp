#include <bits/stdc++.h>

using namespace std;
string st;
char a;
void nhap()
{
    getline(cin,st);
    cin >> a;
}
void xla()
{
    int d=0;
    for (int i=0; i<=st.size(); i++)
        if (st[i]==a || st[i]-32==a || st[i]+32==a) d++;
        cout<<d;
}
void xlb()
{
        while (st[0]==' ') st.erase(0,1);
    while (st[st.size()-1]==' ') st.erase(st[st.size()-1],1);
    for (int i=0; i<=st.size(); i++)
        if (st[i]==' ' && st[i+1]==' ')
        {
            st.erase(i,1);
            i--;
        }
}
void xlc()
{
    for (int i=0; i<=st.size(); i++)
        if (st[i]>='A' && st[i]<='Z')
        st[i]=st[i]+32;
        for (int i=0; i<=st.size(); i++)
            if (st[i]>='a' && st[i]<='z' && st[i-1]==' ')
                st[i]=st[i]-32;
    st[0]=toupper(st[0]);
}
void xld()
{
       for (int i=0; i<=st.size()-1; i++)
        if (st[i+1]==st[i])
        {
            st.erase(i+1,1);
            i--;
        }
        cout << st;
}
int main()
{
    nhap();
    xla();
    xlb();
    xlc();
    xld();
}
