#include <iostream>
using namespace std;

int main()
{
    int n,digit;
    cin >> n >> digit;
    int num=0;
    /*
    for (int i=n;i!=0;i/=10){
        if(digit==i%10) num+=1;
    }
    cout << num;
    */
    for(;n;num+=(digit==n%10),n/=10);
    cout << num;
    return 0;
}
