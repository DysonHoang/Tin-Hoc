    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        int a[7];
        for (int i = 1; i <= 5; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + 1 + 5);
        
        cout<< a[1]+a[2]+a[3]+a[4]<<" "<<a[5]+a[2]+a[3]+a[4];
    }