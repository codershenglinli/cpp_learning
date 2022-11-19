#include<iostream>
using namespace std;

struct birthday
{
    int year;
    int month;
    int day;
};

struct addressbook{
    char name[21];
    birthday bd;
    char tel[12];
    char address[51];

};

bool birthday_cmp(birthday b1, birthday b2){
    if(b1.year<b2.year)
        return true;
    if(b1.year==b2.year){
        if(b1.month<b2.month)   return true;
        if(b1.month == b2.month){
            if(b1.day<b2.day)   return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    addressbook *p = new addressbook[n];
    for(int i=0;i<n;++i){
        cin >> p[i].name >> 
        p[i].bd.year >> p[i].bd.month >> p[i].bd.day >>
        p[i].tel;
        cin.getline(p[i].address,51);
    }
    
    //bubble sort
    for(int i=1;i<n;++i){
        bool flag =false;
        for(int j=0;j<n-i;++j){
            if(birthday_cmp(p[j].bd,p[j+1].bd)){
                addressbook temp;
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
                flag = true;
            }
        }
        if(!flag)   break;
    }

    for(int i=0;i<n;++i){
        cout << p[i].name <<' '<< p[i].bd.year <<' '<< p[i].bd.month <<' '<< p[i].bd.day <<' '<< p[i].tel << p[i].address <<endl;
    }



}