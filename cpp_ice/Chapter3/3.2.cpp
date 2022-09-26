#include<iostream>
using namespace std;

int main(){
    int year,month,day,dayNum=-1;
    cin >> year >> month >> day;
    if (year%4==0&&year%100!=0||year%400==0){
        //判断是否为闰年
        switch (month){
            case 1:
                if (day > 31) {break;}
                else dayNum=31*(month-1)+day;break;
            case 2:
                if (day > 29) {break;}
                else dayNum=31*(month-1)+day;break;
            case 3:
               if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 4:
             if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 5: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 6: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 7: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 8: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 9: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 10: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 11: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            case 12: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10+1; break;
            default: dayNum = -1;
        }
    
    }else{
       switch (month){
            case 1:
                if (day > 31) {break;}
                else dayNum=31*(month-1)+day;break;
            case 2:
                if (day > 28) {break;}
                else dayNum=31*(month-1)+day;break;
            case 3:
               if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10;break; 
            case 4:
             if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10;break; 
            case 5: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 6: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 7: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 8: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 9: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 10: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 11: if (day > 30) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            case 12: if (day > 31) {break;}
                else dayNum=31*(month-1)+day-(4*month+23)/10; break;
            default: dayNum = -1;
            }
    }
    
    if (dayNum==-1) cout <<"Illegal";
    else cout << dayNum;

    return 0;
}