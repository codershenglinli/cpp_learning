#include <iostream>
using namespace std;
int main(){
    for (int i=0;i<4;i++){
        for (int k=0;k<i;k++){
            cout << " ";
        }
        for (int j=0;j<7-2*i;j++){
            cout << "$";
        }
        cout << endl;
    }
    return 0;
}