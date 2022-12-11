#include "clock.h"
#include <iostream>
using namespace std;

void Clock::input(){
    hour = 0;
    min = 0;
    sec = 0;

    char temp[8];
    cin >> temp;

    int i=0;
    for(;temp[i]!=':';++i){
        hour = temp[i]-'0' + hour*10;
    }
    ++i;
    for(;temp[i]!=':';++i){
        min = temp[i]-'0' + min*10;
    }
    ++i;
    for(int j=0;j<2;++i,++j){
        sec = temp[i]-'0' + sec*10;
    }
}

void Clock::show(){
    if(hour<10) cout << 0;
    cout << hour << ':';
    if (min<10) cout << 0;
    cout << min << ':';
    if(sec<10) cout << 0;
    cout << sec << endl;
}

void Clock::minus(const Clock &c1, const Clock &c2){
    hour = 0;
    sec = 0;
    min = 0;
    if(c1.sec>=c2.sec){
        sec = c1.sec - c2.sec + sec;
    }else{
        sec = c1.sec - c2.sec + 60 + sec;
        min = -1;
    }

    if(c1.min>=c2.min){
        min = c1.min - c2.min + min;
    }else{
        min = c1.min - c2.min + min+60;
        hour = -1;
    }

    hour = c1.hour-c2.hour+hour;

}

bool Clock::judge(const Clock &c1, const Clock &c2){
    if(c1.hour>c2.hour){
        return true;
    }else if(c1.hour==c2.hour){
        if(c1.min>c2.min){
            return true;
        }else if(c1.min==c2.min){
            if(c1.sec>c2.sec){
                return true;
            }
        }
    }
    return false;

}

void Clock::delta(const Clock &c1, const Clock &c2){
    if(judge(c1,c2)){
        minus(c1,c2);
    }else{
        minus(c2,c1);
    }
}