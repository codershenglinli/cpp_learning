#include <iostream>
using  namespace std;
int main()
{
    int a,b;
    cin >> a>> b;
    if (a==11&&b<10){
        cout << "A win";
    }else if(a<10&&b==11){
        cout << "B win";
    }else if(a>=10&&b>=10){
        if (a-b==2) cout << "A win";
        else if (b-a==2) cout << "B win";
        else if (a-b>-2&&a-b<2) cout << "In progress";
        else cout << "Illegal";
    }else if(a<11&b<11){
        cout << "In progress";
    }else{
        cout << "Illegal";
    }
    return 0;
}