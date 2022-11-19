#include <iostream>
using namespace std;

struct timeT
{
    int sec;
    int min;
    int hour;
};

void setTime(int sec,int min,int hour,timeT &t){
    t.sec = sec;
    t.min = min;
    t.hour = hour;
}

void increase(timeT &t){
    t.sec = t.sec+1;
    if(t.sec>=60){
        ++t.min;
        t.sec%=60;
    }
    if(t.min>=60){
        ++t.hour;
        t.min%=60;
    }
    if(t.hour>=24){
        t.hour%=24;
    }
}

void showTime(timeT &t){
    char h[3]="00",m[3]="00",s[3]="00";
    h[0]= t.hour/10 + '0';
    h[1]= t.hour%10 + '0';
    m[0]= t.min/10 + '0';
    m[1]= t.min%10 + '0';
    s[0]= t.sec/10 + '0';
    s[1]= t.sec%10 + '0';
    cout << h << ':'
    << m << ':'
    << s <<endl;
}

int main(){
    timeT t1;
    timeT t2;
    int h1,m1,s1,h2,m2,s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    setTime(s1,m1,h1,t1);
    setTime(s2,m2,h2,t2);
    showTime(t1);
    increase(t1);
    showTime(t1);
    showTime(t2);
    increase(t2);
    showTime(t2);
    return 0;
}