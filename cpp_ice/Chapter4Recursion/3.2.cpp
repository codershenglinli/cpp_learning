#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int num = 0;
    for(int i=m;i<=n;i++){
        bool flag = true;
        for(int j=2;j<i;j++){
            if (i%j==0) flag = false;
        }
        if (i==1) flag = false;
        if (flag == true) num++;
    }
    cout <<num;
    return 0;
}