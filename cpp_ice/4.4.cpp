#include <iostream>
using  namespace std;
int main()
{
    //输入你的代码
    int input;
    cin >> input;
    int ge,shi,bai,qian;
    ge = input%10;
    shi =(input/10)%10;
    bai = (input/100)%10;
    qian = input/1000;

    ge+=13;
    shi+=13;
    bai+=13;
    qian+=13;

    char a,b,c,d;
    a = 'A'+ge-1;
    b = 'A'+shi-1;
    c='A'+bai-1;
    d='A'+qian-1;

    cout<<d<<c<<b<<a;
    return 0;
}