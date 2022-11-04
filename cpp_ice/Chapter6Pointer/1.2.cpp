#include <iostream>
using namespace std;

void cross_invalid(int a[], int n){
    int cnt=0;
    for(int i=0;i<=n;i++){
        if(a[i]==1) cnt++;
    }
    int j=1;
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            if(j%3==0||(cnt==2&&j==1))  a[i] = 0;
            ++j;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int *circle = new int[n+1];
    circle[0] = 0;
    for (int i=1;i<=n;++i){
        circle[i] = 1;
    }
    for(int i=0;i<=n;i++){
        cross_invalid(circle,n);
    }
    for(int i=0;i<=n;i++){
        cout << circle[i];
    }

    return 0;
}