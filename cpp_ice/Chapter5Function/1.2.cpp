#include <iostream>
using namespace std;

bool perfectNumber(int n){
    int sum = 0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if(sum==n)  return true;
    
    return false;
}
int main(){
    int m,n;
    bool ans = false;
    cin >> m >> n;
    for (int i=m;i<=n;i++){
        if(perfectNumber(i)){
            cout << i <<' ';
            ans = true;
        }
    }
    if (!ans) cout << -1;
    return 0;
}