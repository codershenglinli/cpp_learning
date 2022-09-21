#include <iostream>
using  namespace std;
int encode(int input){
    input = (input+7)%10;
    return input;
}
int main()
{
    //输入你的代码
    int a,b;
    cin >> a >> b;
    int ge,shi,bai,qian;
    ge = a%10;
    shi =(a/10)%10;
    bai = (a/100)%10;
    qian = a/1000;
    ge = encode(ge);
    shi = encode(shi);
    bai = encode(bai);
    qian = encode(qian);
    //cout << ge << shi << bai << qian;
    a = 1000*shi+100*ge+10*qian+bai;
    cout << a;

    ge = b%10;
    shi =(b/10)%10;
    bai = (b/100)%10;
    qian = b/1000;

    ge = (ge+3)%10;
    shi = (shi+3)%10;
    bai = (bai+3)%10;
    qian = (qian+3)%10;

    b = 1000*shi+100*ge+10*qian+bai;
    cout << " " << b;

}