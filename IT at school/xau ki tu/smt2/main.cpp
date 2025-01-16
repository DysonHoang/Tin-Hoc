#include <bits/stdc++.h>

using namespace std;
const int Mx=1e7;
long long s[Mx+5];
bool ktnt(int x){
if(x<2) return 0;
for(int i=2;i<=sqrt(x);i++)
    if(x%i==0)
    return 0;
return 1;
}

bool SNT[Mx+5];
void sang()
{
    for(int i=2; i<=Mx; i++)
        SNT[i]=1;
    for (int i = 2; i <=sqrt(Mx); i++)
    {
        if (SNT[i])
        {
            for(int j=i*i; j<=Mx; j+=i)
                SNT[j]=0;
        }

    }
}
int main()
{int Max=0;
    string s;
    cin>>s;
    int so=0;
    for(int i=0;i<s.size();i++)
        if(s[i]>='0'&&s[i]<='9')
            so=so*10+(s[i]-'0');
        else
            if(SNT[so])
                Max=max(Max,so);
        cout<<Max;
    return 0;
}
