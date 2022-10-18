//判断重复元素
//记录26个字母法
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch[101] = "";//初始化
    cin.getline(ch,101);
    int max_count=0;//最长无重复子串
    for (int lh=0;lh<strlen(ch);lh++){
        //开始截取处
        for (int rh=0;rh<strlen(ch);rh++){
            //结束截取处
            int array[26]={0};//储存26个字母的出现次数
            int count=0;//单次循环无重复子串长度
            bool flag=true;
            for (int i=lh;i<=rh;i++){  
                ++array[ch[i]-'a'];//记录字母出现次数
                if(array[ch[i]-'a']>1){
                    flag = false;
                    break;
                }
                ++count;
            }
            if(flag){
                if(count>max_count){
                    max_count = count;//选取最大
                } 
            }
        }
    }
    cout <<max_count;
    return 0;
}