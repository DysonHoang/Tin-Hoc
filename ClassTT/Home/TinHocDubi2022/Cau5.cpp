#include <bits/stdc++.h>
#include <string>

using namespace std;
int a[100000];
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    unsigned int n;
    cin>>n;
    for(int i=0;i < n;i++)
        cin>>a[i];
    long long count = 0;

    for (int i = 0; i < n; ++i) 
    {
     int min1=a[i];
    int max1=a[i];
        for(int j = i;j < n;++j)
        {
            min1=min(min1,a[j]);
            max1=max(max1,a[j]);
                if((max1-min1)%2==0)
                {
                    ++count;                    
                }
        }   
    }

    cout << count ;
}