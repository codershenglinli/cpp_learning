#include <iostream>
#include "class.h"

using namespace std;
int player_choice();
int main(){
    char ch[100];
    cin.getline(ch,100);
    String str(ch);
    int choice;
    char c;
    int i;
    while((choice=player_choice())!=-1){
        switch (choice){
            case 0:
                //cout << str.length();
                break;
            case 1:
                int start,end;
                cin >> start >> end;
                str.substr(start,end).printStr();
                break;
            case 2:
                cin >> c;
                cout << str.find_first_of(c) << endl;
                break;
            case 3:
                cin >> i >> c;
                str.add_before(i,c);
                break;
            case 4:
                cin >> i;
                str.delete_at(i);
                break;
            case 5:
                str.printStr();
                break;
            default:
                break;
        }
    }
}

int player_choice(){
    char ch;
    cin >> ch;
    if(ch == '@') return -1;
    return ch-'0'; 
}
