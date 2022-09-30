#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int num1=rand()%10;
    int num2=rand()%10;
    int op=rand()%4;
    int result,result2;
    switch (op){
        case 0:cout << num1 << '+' << num2 << endl;
        cin >> result;
        if (num1+num2==result){
            cout << "YES!" <<endl;
        }
        else{
            cout << "NO!" <<endl;
        }
        break;
        
        case 1:cout << num1 << '-' << num2 << endl;
        cin >> result;
        if (num1-num2==result){
            cout << "YES!" <<endl;
        }
        else{
            cout << "NO!" <<endl;
        }
        break;

        case 2:cout << num1 << '*' << num2 << endl;
        cin >> result;
        if (num1*num2==result){
            cout << "YES!" <<endl;
        }
        else{
            cout << "NO!" <<endl;
        }
        break;

        case 3:cout << num1 << '/' << num2 << endl;
        cin >> result >> result2;
        if (num1/num2==result&&num1%num2==result2){
            cout << "YES!" <<endl;
        }
        else{
            cout << "NO!" <<endl;
        }
        break;
    }
}