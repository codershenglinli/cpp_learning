#include <iostream>
using namespace std;

int main(){
    int array[] = {0,4,56,3,2,6,32,543};
    bool flag;
    for (int i=1;i<8;i++){
        flag= false;
        for(int j=0;j<8-i;j++){
            if (array[j+1]<array[j]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                flag = true;
            }
        }
        if(!flag) break;
    }
    for(int i=0;i<8;i++){
        cout << array[i];
    }
    return 0;
}   