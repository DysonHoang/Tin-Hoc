#include <bits/stdc++.h>
using namespace std;
map<string,int>  MAP;
string s;
int main()
{
    int demA=0,resB=0;
    int xuatHienHon2 = 0;

    getline(cin,s);
    string a="";
    s= s+" ";
    for(int i=0; i<=s.size()-1; i++)
    {
        if(s[i] != ' ')
        {
            a+=s[i];
        }
        else
        {
            if(a.size()>0)
            {
                    demA++;
                 if(MAP[a]==1)
                 {
                     xuatHienHon2+=2;
                 }
                 if(MAP[a]>1)
                 {
                     xuatHienHon2++;
                 }
                 MAP[a]++;

                //xu li b
                int check =0;
                for(char c: s)
                {
                    if(isdigit(c))
                    {
                        resB++;
                        check =1;
                    }
                }
            }
            a="";
        }
    }

     cout<<demA-xuatHienHon2<<endl;
     cout<<resB;
}