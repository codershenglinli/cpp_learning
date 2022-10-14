#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    if (n<1000||n>1000000) cout << "Input error!";
    else{
        int flag=false;
        for (int i=999;i>99;i--){
            if (n%i==0){
                cout << i;
                flag=true;
                break;
            }
        }
        if (!flag) cout << "Not found!";
    }
    return 0;
}
