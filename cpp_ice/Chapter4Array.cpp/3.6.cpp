/*
任务描述
本关任务：输入只包含小写字母的非空字符串，求最长无重复字母的字符串的长度

编程要求
根据提示，在右侧编辑器补充代码，输入只包含小写字母的非空字符串，长度小于100，寻找没有重复字母的子串，求这一类子串的最大长度并输出
*/
#include <iostream>
using namespace std;

int main(){
    char ch[101]="";
    char array[101]="";
    cin.getline(ch,101);
    int max_length=0;
    for (int i=0;ch[i]!='\0';i++){
        for (int j=0;ch[j]!='\0';j++){
            bool shit = false;
            for(int k=i;k<=j;k++){
                array[k-i]=ch[k];
            }

            bool flag;
            for (int l=1;l<=j-i;l++){
                flag= false;
                for(int m=0;m<=j-i-l;m++){
                    if (array[m+1]<array[m]){
                        int temp = array[m];
                        array[m] = array[m+1];
                        array[m+1] = temp;
                        flag = true;
                    }
                    if (array[m+1]==array[m]){
                        shit =true;break;
                    }
                }
                if(!flag) break;
            }

            if(shit) break;
            else{
                int length = j-i+1;
                if(length>max_length) max_length = length;
            }

        }
    }
    std::cout << max_length;

    return 0;
}