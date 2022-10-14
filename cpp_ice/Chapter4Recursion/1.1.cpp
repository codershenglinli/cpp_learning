#include <iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    int sum;
    bool flag = false;
    
    cin >> a >> b;
    for(i=a;i<b;i++){
        int digit=0;
        for(j=i;j>0;j=j/10){
            digit += (j%10)*(j%10)*(j%10);
        }
        if (i==digit) {
            cout << i << ' ';
            flag = true;
        }
    }

    if (!flag) cout << "no";

    return 0;
}