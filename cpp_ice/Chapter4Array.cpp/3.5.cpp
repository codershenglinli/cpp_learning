#include <iostream>
using namespace std;

int main(){
    char ch[81]="";
    char new_ch[81]="";
    cin.getline(ch,81);
    for(int i=0;2*i+1<80;++i){
        new_ch[i]=ch[2*i+1];        
    }
    cout << new_ch;
    return 0;
}