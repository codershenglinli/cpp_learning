#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for (int j=0;j<10;j++){
        int sum = 0;
        for(int i=n;i>0;i/=10)
            sum += i%10;
        n = sum;
    }
    cout << n;
    return 0;
}
