#include <bits//stdc++.h>

using namespace std;

int main()
{

string st;
getline(cin,st);
while(st[0]==' ')
        st.erase(0,1);
    while(st[st.size()-1]==' ')
        st.erase(st.size()-1,1);
    for(int i=1; i<=st.size()-1; i++)
        if(st[i]==' '&&st[i+1]==' ')
        {
            st.erase(i,1);
            i--;
        }
        cout<<st;
}
