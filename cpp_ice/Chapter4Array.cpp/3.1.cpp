#include <iostream>
using namespace std;

int main(){
    char array[81]="";
    cin.getline(array,81);

    for (int i=1;i<80;i++){
        bool flag =false;
        for (int j=0;j<80-i;j++){
            if(array[j]<array[j+1]){
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1] = temp;
                flag=true;
            }
        }
        if (!flag)  break;
    }

    for (int i=0;i<80;i++){
        if(array[i]!=array[i+1])
            cout << array[i];
    }
    return 0;
}