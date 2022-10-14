#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    bool flag=true;
    cin >>num1 >>num2;
    for(int n=num1;n<=num2;n++){
        int num=0;
        for(int i=1;i<n;i++){
            if(n%i==0) num+=i;
        }
        if (num==n) {
        cout <<n<<' ';
        flag=false;
        }
    }
    if (flag) cout << -1;
    return 0;
}