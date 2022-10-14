#include <iostream>
using namespace std;

int main()
{
    int a0=0,a1=1;
    int i=1;
    int n;
    cin >> n;
    while (i<n){
        a1 = a0+a1;
        a0=a1;
        i = i+1;
    }
    cout << a1; 
    return 0;
}
