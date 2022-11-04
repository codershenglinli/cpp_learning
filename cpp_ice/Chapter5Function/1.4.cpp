#include <iostream>
using namespace std;

void valid(int n){
    cout << n << ' ';
    if (n==1)   return;
    if(n%2==0){
        return valid(n/2);
    }else{
        return valid(n*3+1);
    }
}
int main(){
    int n;
    cin >> n;
    valid(n);
    return 0;
}