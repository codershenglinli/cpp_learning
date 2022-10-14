#include<iostream>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    int num=0;
    for(int i=1;i<=n;i++){
        int curr =i;
        while(curr%p==0){
        num+=1;
        curr/=p;
        }
    }
    cout <<num;

    return 0;
}