#include <iostream>
using namespace std;
int main()
{
    int a, b, num, gewei, shiwei, baiwei, qianwei, wanwei, geshu=0;

    cin>>a>>b;

    num=a;
    if(b>1000) b=1000;
    else 
    while (num<=b){
        gewei=num%10;

        shiwei=((num-gewei)/10)%10;

        baiwei=((num-gewei-shiwei*10)/100)%10;

        qianwei=((num-baiwei*100-shiwei*10-gewei)/1000)%10;

        wanwei=(num-qianwei*1000-baiwei*100-shiwei*10-gewei)/10000;

        if (num==wanwei*wanwei*wanwei+qianwei*qianwei*qianwei+gewei*gewei*gewei+shiwei*shiwei*shiwei+baiwei*baiwei*baiwei){
            cout<<num<<" ";
            geshu=geshu+1;
        }
        num=num+1;

    }
    if (geshu==0){
        cout<<"no"<<endl;
    }

return 0;
}
