#include <iostream>
#include <cstring>
using  namespace std;
int main(){
    char string[50]={0};
    char original[50]={0};
    cin.getline(string,50);
    int len = strlen(string);
    for (int i=0;i<len;i++){
            original[i] = string[i];
    }
    int i=0,j=len-1;
    while (i<j){
        int temp = string[i];
        string[i] = string[j];
        string [j] = temp;
        i++;
        j--;
    }
    bool flag=true;
    for (i=0;i<len;i++){
    if (original[i]!=string[i]){
        flag =false;
    }
    }
    if (flag) cout << "Yes";
    else cout << "No";

}