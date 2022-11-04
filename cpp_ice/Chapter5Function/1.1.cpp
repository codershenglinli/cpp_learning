#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false;
    for (int i=n/2;i>1;i--){
        if (n%i==0){
            return false;
        }
    }
    return true;

}

int main()
{
    int m,n;
    cin >> m >> n;
    int total=0;
    for(int i=m;i<=n;i++){
        if(isPrime(i))  total++;
    }
    cout << total;

	return 0;
}
