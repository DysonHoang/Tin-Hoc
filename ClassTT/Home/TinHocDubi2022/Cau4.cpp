#include <bits/stdc++.h>
#include <string>

using namespace std;;
int a[10000];
int demtg(int a[], int n) {
    int count = 0;

    for (int i = 0; i < n - 2; ++i) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; ++j) {
            while (k < n && a[i] + a[j] > a[k]) {
                ++k;
            }
            count += k - j - 1;
        }
    }

    return count;
}
int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int ans = demtg(a,n);
    cout<<ans;  
}