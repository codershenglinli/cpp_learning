#include <iostream>
using  namespace std;
int main()
{
    char type;
    int IN,OUT,duration,money;
    cin >> type >> IN >>OUT;
    duration = OUT -IN;
    switch (type){
        case 'c':
            if (duration<=3){
                money = duration *5;
            } else{
                money = 3*5 +10*(duration-3);
            }
            break;
        case 'b':
            if (duration<=2){
                money = duration *10;
            } else{
                money = 2*10 +15*(duration-2);
            }
            break;

        case 't':
            if (duration<=1){
                money = duration *10;
            } else{
                money = 10 +15*(duration-1);
            }
            break;
    }
    cout << money;
    return 0;
}