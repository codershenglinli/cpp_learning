#include <iostream>
using  namespace std;
int main()
{
    //输入你的代码
    int kwh;
    cin>>kwh;
    int money = 6*kwh;
    int yuan,jiao;
    yuan = money/10;
    int sum=money;
    int finyuan,finjiao;
    if (yuan==0){
        cout<<jiao<<endl;
    }else{
    for(int i=0;i<yuan*10;i+=10){
        jiao=money-yuan*10;
        if ((yuan+jiao)<sum){
            sum=yuan+jiao;
            finyuan = yuan;
            finjiao = jiao;
        }
    }
    cout <<finyuan<<' '<<finjiao<<endl;
    }
    return 0;
}