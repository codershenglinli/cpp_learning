#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[ ], int len) {
	//此处填补几行代码
    if(len==1||len==0)  return true;
    if(*array==*(array+len-1)){
        *(array+len-1) = '\0';
        array = array+1;
        return func(array,len-2);
    }
    return false;
}


int main() {
    char ch[20];
    bool result;

    cin >> ch;

	//此处填补几行代码
    if(func(ch,strlen(ch)))    cout<<"Yes";
    else cout << "No";
    return 0;
}

