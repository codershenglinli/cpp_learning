//计算1到100的素数和
#include<iostream>
using namespace std;
int largest_fac(int n);
int main(){
    int num,sum=2;
    for (int num=3;num<=100;num+=2){    //只用寻找奇数
        int count =0;
        /*
        for(int k=1;k<=num;k+=2){
            if (num%k==0)   count++;    //记录因子个数
        }
        */
        for(int k=1;k<=num;count+=(num%k==0),k+=2); //逗号表达式
        if (count==2)
            sum+=num;
    }
    cout << sum << endl;;
    cout << largest_fac(100);
    return 0;
}

//找到最大的因子
int largest_fac(int n){
    int fac;
    for(fac=n/2;n%fac!=0;fac--); //可以用分号终结for语句！只需要从n/2开始。
    return fac;
}

