#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    int n,a;
    int sum=0;
    cin >> a >> n;
    for (int i=1;i<=n;i++)
        sum += i*a*pow(10,(n-i));
    cout << sum;
    return 0;
}
