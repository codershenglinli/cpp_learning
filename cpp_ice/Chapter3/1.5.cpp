#include<iostream>
using namespace std;

int main(){
    char ascii;
    cin >> ascii;
    
    if ('a'<=ascii&&ascii<='z'){
    cout << char(ascii+'A'-'a');
    }
    else if ('A'<=ascii&&ascii<='Z'){
        cout << char(ascii+'a'-'A');
    }else{
        cout << ascii;
    }
    
    return 0;
}