/*
任务描述
本关任务：黑色星期五是指某天既是13号又是星期五。13号在星期五比在其他日子少吗？为了回答这个问题，编写一个程序，计算每个月的13号落在周一到周日的次数。

编程要求
根据提示，在右侧编辑器补充代码，用户输入正整数n，n为正整数且不大于400。要求计算从1900年1月1日至1900+n-1年12月31日中13 号落在周一到周日的次数（已知1900年1月1日是星期一）。
*/
#include<iostream>
using namespace std;

int main(){
    int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int not_run[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    int *month_array;
    int year_days;
    int answer[7]={0};
    cin>>n;
    int year;
            int past_days=13;
    for (int i=0;i<n;i++){
        year = 1900+i;

        if(year%4==0&&year%100!=0||year%400==0){
             month_array=run;
             //year_days=366;
        }
        else{
            month_array=not_run;
            //year_days=365;
        }


        for (int month=0;month<12;month++){
            int day = past_days%7;
            day = (day+6)%7;
            answer[day]+=1;
            past_days += month_array[month];
        }
    }
    
    for(int i=0;i<7;i++){
            cout << answer[i]<< ' ';
        }

    return 0;
}
