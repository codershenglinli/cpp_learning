#include<iostream>
using namespace std;

int Gcd(int m,int n)
{
    if (n==0) return -1;
    if(m%n==0)  return n;
    else return Gcd(n%m,m);`

}

int main()
{
    int m, n;
    cin >> m >> n;
    
    //你的代码
    int res = Gcd(m,n);
    if(res==-1) cout<<"Input error!";
    else cout<<m/res<<"/"<<n/res;
    return 0;
}
