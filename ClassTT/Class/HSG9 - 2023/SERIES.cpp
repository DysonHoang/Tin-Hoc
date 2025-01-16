#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    string num1 = "", num2 = "", s3 = "";

    bool non_zero_found = false;
    for (int i = 0; i < s1.length(); ++i)
    {
        if (s1[i] >= '0' && s1[i] <= '9')
        {
            if (s1[i] != '0' || non_zero_found)
            {
                num1 += s1[i];
                non_zero_found = true;
            }
        }
    }
    if (num1 == "")
        num1 = "0";

    non_zero_found = false;
    for (int i = 0; i < s2.length(); ++i)
    {
        if (s2[i] >= '0' && s2[i] <= '9')
        {
            if (s2[i] != '0' || non_zero_found)
            {
                num2 += s2[i];
                non_zero_found = true;
            }
        }
    }
    if (num2 == "")
        num2 = "0";

    s3 = num1 + num2;

    for (int i = 0; i < s3.length(); ++i)
    {
        for (int j = i + 1; j < s3.length(); ++j)
        {
            if (s3[i] < s3[j])
            {
                char temp = s3[i];
                s3[i] = s3[j];
                s3[j] = temp;
            }
        }
    }

    cout << num1 + num2 << "\n"
         << s3 << "\n";

    return 0;
}
