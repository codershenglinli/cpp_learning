#include<iostream>
using namespace std;

int main(){
    int year,month,day;
    cin >> year >> month >> day;
    int dayNum=31*(month-1)+day;
    if (month>2){
        dayNum=dayNum-(4*month+23)/10;
        if (year%4==0&&year%100!=0){
            dayNum += 1;
        }
    }
    cout << dayNum;
    return 0;
}