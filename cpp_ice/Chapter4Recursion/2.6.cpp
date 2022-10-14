#include <iostream>
using namespace std;

int main()
{
    int pred=1,curr=2;
    int n;
    cin>>n;
    for(int i=0;i<n-2;i++){
        int temp =curr;
        curr=pred+curr;
        pred=temp;
    }
    if(n==1) cout << 1;
    else cout << curr;
    return 0;
}
