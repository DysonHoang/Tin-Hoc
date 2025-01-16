// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
#define mod 1000000007
int a, b;
int Count;
int Min, Cmin;
void answer(int n)
{
  int m = n, divisors = 1;
  for (int i = 2; i <= sqrt(m); i++)
  {
    if (m % i == 0)
    {
      int dem = 0;
      while (m % i == 0)
      {
        dem++;
        m /= i;
      }
      divisors *= (dem + 1);
    }
  }
  if (m > 1)
    divisors *= 2;
  if (divisors > Cmin)
  {
    Min = n;
    Cmin = divisors;
    Count = 1;
  }
  else if (divisors == Cmin)
    Count++;
}
main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> a >> b;
  for (int i = a; i <= b; i++)
  {
    answer(i);
  }
  cout << Min << " " << Cmin << " " << Count;
}