#include <iostream>
using namespace std;

int main()
{
    int i,x;
    cin >>x;
    for(i=0;i*i<=x;i++){}
    cout << i-1;
    return 0;
}
