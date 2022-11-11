/*
任务描述
本关任务：输入若干个字符串(每个字符串的长度不超过30个字符，字符串总数不超过30)，和一个英文字符ch。 要求删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。

编程要求
根据提示，在右侧编辑器补充代码，用户依次输入字符串数量n，n个字符串和一个英文字符ch。删除每个字符串中的字符ch(区分大小写)，得到新的字符串，然后将新的字符串按照字典逆序排序后输出。
*/
#include <iostream>
#include <cstring>
using namespace std;

//del certain char? put to last & del
//(Bubble sort)
void delete_char_in_str(char *str,char ch){
    bool flag = true;
    while (flag){
        int i=0;
        flag = false;
        for(;str[i+1]!='\0';++i){
            if(str[i]==ch){
                flag = true;
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
            }
        }
        if(str[i]==ch){
            flag = true;
            str[i] = '\0';
        }
    }
}

//sort_strings(Bubble sort)
void sort_strings(char *strings[],int scale){
    bool flag;
    for(int i=1;i<scale;++i){
        flag = false;
        for(int j=0;j<scale-i;++j){
            if(strcmp(strings[j],strings[j+1])>0){
                flag = true;
                char *temp_str;
                temp_str = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp_str;
            }
        }
        if(!flag) break;
    }
}

int main(){
    //enter the number of strings
    int n;
    cin >> n;
    cin.get();

    //create a pointer array
    char *ptr_arr[n];

    //read the strings
    for(int i=0;i<n;i++){
        char *temp_str = new char[31];
        cin.getline(temp_str,31);
        ptr_arr[i] = temp_str;
    }

    //enter the char
    char to_del;
    cin >> to_del;

    //delete the char
    for(int i=0;i<n;i++){
        delete_char_in_str(ptr_arr[i],to_del);
        
    }

    sort_strings(ptr_arr,n);
    
    for(int i=n-1;i>=0;i--){
        cout << ptr_arr[i] << endl;
    }
    return 0;
}