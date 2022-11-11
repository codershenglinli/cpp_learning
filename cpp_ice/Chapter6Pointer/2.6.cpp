/*
根据提示，在右侧编辑器补充代码，定义函数add_float(char* a, char* b, char* res)实现两个正浮点数a, b的精确加法。
注意：只需要实现函数add_float，函数中没有任何输入输出。
函数的输入参数char* a和char* b都是用字符串表示的正浮点数。保证a, b一定都包含一个字符是小数点’.’，保证其余字符全是0-9的数字。保证a, b不超过128个字符。
函数的输出参数char* res，保证浮点数a+b的结果不超过 128 个字符。
要求res字符串必须包含小数点’.’（即使结果是像下面 sample 1 这样并没有小数部分）。
要求res字符串没有任何多余的前缀字符’0’和后缀字符’0’（即使结果像下面 sample 2 这样没有整数部分）。
注意：虽然要求结果字符串res必须有小数点且没有任何前缀后缀0，但是并不保证字符串a, b满足这两点。
*/
#include <iostream>
#include <cstring>
using namespace std;
char zhengshu1[128];
char xiaoshu1[128];
char zhengshu2[128];
char xiaoshu2[128];
char jinwei[128];

int cal_length(char *a){
    int n;
    for(n=0;a[n]!='\0';++n);
    return n;
}

int find_point(char* a){
    for(int i=0;a[i]!='\0';++i){
        if (a[i] == '.') return i;
    }
    return 0;
}

//相等位数的加法
char* add(char *a,char *b,int len){
    
    char *ans = new char[len+2];
    //初始化数组
    for(int i=0;i<len+1;++i){
        ans[i]='0';
    }
    ans[len+1] = '\0';

    for(int i=len;i>=1;--i){
        int sum = a[i-1]-'0'+b[i-1]-'0'+ans[i]-'0';
        ans[i]= sum%10+'0';
        ans[i-1]= sum/10+'0';
    }

    return ans;
}

//unify the length
//num_to_string
//abstraction of num
//string_to_num
void divide_num(char *a,char *b){
    int point_a = find_point(a);
    int point_b = find_point(b);
    int zhengshu1_len = point_a;
    int zhengshu2_len = point_b;
    int xiaoshu1_len = cal_length(a) - zhengshu1_len - 1;
    int xiaoshu2_len = cal_length(b) - zhengshu2_len - 1;

    if(zhengshu1_len<zhengshu2_len){
        for(int i=0;i<zhengshu2_len-zhengshu1_len;++i){
            zhengshu1[i] = '0';
        }
    }else{
        for(int i=0;i<zhengshu1_len-zhengshu2_len;++i){
            zhengshu2[i] = '0';
        }
    }

    strncat(zhengshu1,a,point_a);
    strcat(xiaoshu1,a+point_a+1);
    strncat(zhengshu2,b,point_b);
    strcat(xiaoshu2,b+point_b+1);
    if(xiaoshu1_len<xiaoshu2_len){
        for(int i=0;i<xiaoshu2_len-xiaoshu1_len;++i){
        xiaoshu1[xiaoshu1_len+i] = '0';
        }
    }else{
        for(int i=0;i<xiaoshu1_len-xiaoshu2_len;++i){
        xiaoshu2[xiaoshu2_len+i] = '0';
        }
    }
}
void add_float(char* a, char* b, char* res) {
    divide_num(a,b);
    char *sum_zhengshu = new char[128];
    char *sum_xiaoshu = new char[128];
    sum_zhengshu = add(zhengshu1,zhengshu2,cal_length(zhengshu1));
    sum_xiaoshu = add(xiaoshu1,xiaoshu2,cal_length(xiaoshu1));
    if(sum_xiaoshu[0]=='1'){
        
        sum_zhengshu = add(zhengshu1,zhengshu2,cal_length(zhengshu1))
    }
    int first_in_zhengshu=0,first_in_xiaoshu=0;
    for(;sum_zhengshu[first_in_zhengshu]!='0';++first_in_zhengshu);
    sum_zhengshu = sum_zhengshu+first_in_zhengshu;
    
    int i=0;
    return;

  
}


int main()
{   
    
    char num1[128], num2[128], res[128];
    cin >> num1;
    cin >> num2;
    add_float(num1, num2, res);
    cout << res << endl;
    return 0;
    }
