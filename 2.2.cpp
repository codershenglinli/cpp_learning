#include<iostream>
using namespace std;

int main(){
    enum weekdayT{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
    weekdayT weekday;
    weekday = Sun;
    cout << weekday <<endl;

    int i =42;
    cout << hex << i<<endl;
    cout << oct << i<<endl;
    cout << 42 << endl;
    cout << dec << 42 << endl;
}