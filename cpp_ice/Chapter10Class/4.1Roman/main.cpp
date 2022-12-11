#include "class.h"
#include <iostream>
using namespace std;


int main(){
    char input[100];
    RomanWithInt n;
    while(1){
        cin >> input;
        if(input[0]=='@') break;
        if(input[0]>='0'&&input[0]<='9'){
            n.Int2Roman(input);
        }else{
            n.Roman2Int(input);
        }
    }
    return 0;
}