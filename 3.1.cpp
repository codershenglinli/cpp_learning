#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    srand(time(NULL));
    int num1=rand()%10;
    int num2=rand()%10;
    int op=rand()%4;
    switch (op){
        case 0:cout << num1 << '+' << num2 << endl;
    }
}