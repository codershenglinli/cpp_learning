#include <iostream>
using namespace std;
//people have books?
int take[5]={-1,-1,-1,-1,-1}; //Initialized as ZERO!
bool like[5][5]={
    false,false,true,true,false,//Fisrt person
    true,true,false,false,true,
    false,true,true,false,true,
    false,false,false,true,false,
    false,true,false,false,true
};
int n=0;
void book2person(int book_num){
    for(int person_num=0;person_num<5;person_num++){
        if (like[person_num][book_num]==true&&take[person_num]==-1){//Like & No book,can giv to book
            take[person_num] = book_num;
            if(book_num==4){
                n++;
                cout << "\n" << n <<"th\n";
                cout << "PERSON\tBOOK\n";
                for(int i=0;i<5;i++){
                    cout << char(i+'A') << take[i] <<endl;
                }
            }
            else book2person(book_num+1);
            take[person_num] = -1;
        }
    }
}
int main(){
    book2person(0);
}