#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{ cin>>n;
    int s = 0, t = 0;
	for(int i = 1; i <= n; i++)
	{
		t = t + i;
		s = s + 1.0*t;
	}
        cout>>s;
    return 0;
}
