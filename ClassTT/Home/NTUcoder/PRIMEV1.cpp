    #include<bits/stdc++.h>
    using namespace std;
    bool nt(int x)
    {if(x<2) return 0;
        for(int i=2;i<=sqrt(x);i++)
            if(x%i==0) return 0;
            return 1;
    }
    int main()
    {
        ios_base::sync_with_stdio(NULL)
        cin.tie(0);
         cout.tie(0);
    long long n;
    cin>>n;
        int ans=2*n+1;
        if(nt(ans))
        {
            cout<<
        }
    }