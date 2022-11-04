#include <iostream>
#include <cstring>
using namespace std;

void getDate(int &day, int &month, int &year){
    char ch[10] = "";
    cin >> ch;

    day =0;
    int i=0;
    for(;ch[i]!='-';++i){
        day = day*10 + ch[i]-'0';
    }

    //Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
    char *month_arr[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    char get_month[4];
    strncpy(get_month,ch+i+1,3);
    for(int j=0;j<12;j++){
        if(strcmp(month_arr[j],get_month)==0){
            month = j+1;
            break;
        }
    }

    i=i+5;
    year = 0;
    for(;ch[i]!='\0';++i){
    year = year*10 + ch[i]-'0';
    }


}
int main()
{
    int day, month, year;
    getDate(day, month, year);
    cout << day <<" "<< month<<" " << year << endl;
    return 0;
}
