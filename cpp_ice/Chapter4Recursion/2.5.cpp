#include<iostream>
using namespace std;

int main(){
    int n,num=0;
    cin >> n;
    while(n!=1&&(n%2==0)||(n%3==0)||(n%5==0)){
        if(n%2==0)  n/=2;
        else if(n%3==0)  n=2*n/3;
        else if(n%5==0)  n=4*n/5;
        num++;
    }
    if(n==1)
    cout <<num;
    else cout<<-1;
    return 0;
}