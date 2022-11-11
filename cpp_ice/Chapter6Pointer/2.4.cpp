/*
根据提示，在右侧编辑器补充代码，strrchr第一个参数为输入字符串，第二个参数为要查找的字符。返回一个指针，指向被查找的字符串在字符串中最后出现的位置。如果没有出现，返回空指针。字符串最大长度50。
*/
#include <iostream>
using namespace std;

char* strrchr(char* str, char ch) 
{
    char *ptr = str;
    char *ans = NULL;
    int i=0;
    for(;*ptr!='\0';++ptr,++i){
        if(*ptr == ch){
            ans = ptr;
        }
    }
    //if(*ptr=='\0')  return NULL;
    return ans;
}

int main()
{   
    char str[51];
    char ans;
    cin.getline(str,51); 
    char ch;
    cin.get(ch);
    if(strrchr(str,ch)){
    cout << strrchr(str,ch);
    }else{
        cout << "no";
    }
    return 0;
}