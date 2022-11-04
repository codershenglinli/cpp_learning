#include <iostream>
using namespace std;

long long quickPow(int n, int k)
{
    if(k==0)    return 1;
    if(k==1)    return n;
    if(k==2)    return n*n;
    if(k%2==0) {
        long long n_k_2=quickPow(n,k/2);
        return n_k_2*n_k_2;
    }
    else{
        long long n_k_2=quickPow(n,k/2);
        return n_k_2*n_k_2*n;
    }
}

int main() 
{
  int n, k;
  cin >> n >> k; 
  cout << quickPow(n, k);
  return 0;
}
