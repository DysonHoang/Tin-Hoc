#include <iostream>

using namespace std;
float a, thue, luong;
int main()
{   cin >>a;
    if(a>15)
    {
        thue=a*0.3;
        luong=a-thue;
        cout <<"luong la"<<luong<<" "<<"thue la"<<thue;
    }
    if (a<7)
    {
        thue=a*0.1;
        luong=a-thue;
        cout <<"luong la :"<<luong<<" "<<"thue la"<<thue;
    }
    if (a>=7&&a<=15)
    {
        thue=a*0.2;
        luong=a-thue;
        cout <<"luong la"<<luong<<" "<<"thue la"<<thue;
    }
    return 0;
}
