//overflow
//signed
#include <iostream>
using  namespace std;
int main()
{
    int a,b;
    cin >> a >>b;
    int c = a+b;
    if (a>=0&b>=0){
        if (c<a||c<b){
            cout << "error";
        }else{
            cout << c;
        }
    }else if (a<0&&b<0){
        if (c>a||c>b){
            cout << "error";
        }else{
            cout << c;
        }
    }else{
        cout << c;
    }
    return 0;
}