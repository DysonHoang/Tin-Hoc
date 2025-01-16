#include <iostream>

using namespace std;

int main()
{int dem=1;
    string s;
cin>>s;
    s = "#" + s;
for(int i=1;i<s.size();i++)
   {
       if(s[i]==s[i-1]) dem ++;
       else if(i > 1){
        cout << dem << s[i - 1];
        dem = 1;
       }
   }

    cout << dem << s[s.size() - 1];
    return 0;
}