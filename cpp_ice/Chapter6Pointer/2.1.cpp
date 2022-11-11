/*
任务描述
本关任务：Julian历法是用年以及这一年中的第几天来表示日期。设计一个函数，将Julian历法表示的日期转换成月和日，如Mar 08（注意闰年的问题）。函数返回一个字符串，即转换后的月和日。如果参数有错，如天数为第370天，返回NULL指针，此时屏幕无打印输出。

编程要求
根据提示，在右侧编辑器补充代码，用户输入年份和天数，输出转换后的月和日。如果参数有错，如天数为第370天，返回NULL指针，此时屏幕无打印输出。

测试说明
平台会对你编写的代码进行测试：

测试输入：
1998
33
预期输出：
Feb 02
*/

#include <iostream>
//#include <cstring>
using namespace std;

//char ans[7];
char *julian(int year, int day){
    
    //leap year or not?
    bool leap_year;
    if(year%4==0&&year%100!=0||year%400==0){
        leap_year = true;
        if(day>366) return NULL;
    }else{
        leap_year = false;
        if(day>365) return NULL;
    }

    //store the months
    int leap_year_month[12] =     {31,29,31,30,31,30,31,31,30,31,30,31};
    int non_leap_year_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int month = 0;
    if(leap_year){
        for(;day>leap_year_month[month];++month){
            day -= leap_year_month[month];
        }
    }else{
        for(;day>non_leap_year_month[month];++month){
            day -= non_leap_year_month[month];
        }
    }

    char *ans = new char[7];
    char *Name_of_months[12] = {"Jan ","Feb ","Mar ","Apr ","May ","Jun ","Jul ","Aug ","Sep ","Oct ","Nov ","Dec "};
    for(int i=0;i<4;i++){
        *(ans+i) = *(*(Name_of_months+month)+i);
    }  
    *(ans+4) = day/10+'0';
    *(ans+5) = day%10+'0';
    *(ans+6) = '\0';

    return ans;
}
int main()
{
    int year,day;
    char* res;
    cin>>year>>day;
    res=julian(year,day);
    cout<<res<<endl;
    delete []res;
    return 0;
}
