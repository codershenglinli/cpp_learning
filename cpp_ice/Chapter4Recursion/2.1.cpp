#include<iostream>
#include<cmath>
using namespace std;

//高人指点的算法
int rev(int a){
    int b=0;
    while(a){
    b=a%10+b*10;
    a/=10;
    }
    return b;
}

int main(){
    int x,n;
    
    int num = 0;
    int rev_x =0;
    cin >> n;
    for (x=0;x<n;x++){
        rev_x =0;
        for (int i=x;i>0;i/=10){    //每次去掉一位
            int digits=0;
            for (int j=i;j>0;j/=10){    //先得到去掉一位后的位数
                digits+=1;
            }
            int last_digit=i%10;    //得到最后一位
            rev_x+=last_digit*pow(10,digits-1);   //把每个最后一位提前到相应的位数    
        }
       
        if(rev_x+x==n){     //判断解是否正确
            num+=1;//cout<<x<<endl;
        }
    }
    cout << num;
    return 0;
}