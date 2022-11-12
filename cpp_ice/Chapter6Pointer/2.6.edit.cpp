#include <iostream>
#include <cstring>
using namespace std;

//Abstration of zhengshu.Using reversed arrays.
//just to align the points......
//There must be other ways......
char zhengshu[128];
char xiaoshu[128];
char dot[2] = ".";
void str2zhengshu(const char *a,int A[]){
    //Convert string to number
    for(int i=strlen(a)-1,j=0;i>=0;--i,++j){
        A[j] = a[i] - '0';
    }
    for(int i=strlen(a);i<128;++i){
        A[i] = 0;
    }
}
void str2xiaoshu(const char *a,int A[]){
    for(int i=0;i<strlen(a);++i){
        A[i] = a[i] - '0';
    }
    for(int i=strlen(a);i<128;++i){
        A[i]=0;
    }
}

int cal_length_xiaoshu(const int A[]){
    int i;
    for(i=127;A[i]==0;--i);
    return i;
}
void xiaoshu2str(const int A[],char *a){
    for(int i=0;i<=cal_length_xiaoshu(A);++i){
        a[i]=A[i]+'0';
    }
}

void zhengshu2str(const int A[],char *a){
    //Convert num to string
    int first_digit;
    int last_digit=0;
    for(first_digit=127;A[first_digit]==0;--first_digit);
    for(int i=0,j=first_digit;j>=last_digit;--j,++i){
        a[i]=A[j]+'0';
    }
}

//SO MANY REPEATED FUNCTIONS !!!
void add_xiaoshu(int A[],int B[],int sum[]){
    int addition = 0;
    for(int i=127;i>0;--i){
        sum[i] = A[i] + B[i] + addition;
        if(sum[i]>=10){
            addition = sum[i]/10;
        }else{
            addition = 0;
        }
        sum[i]=sum[i]%10;
    }
    sum[0] = A[0]+B[0]+addition;
}

//In such implementation, the last digit is aligned ,easy to add!
void add_zhengshu(int A[],int B[],int sum[]){
    int addition=0;
    for(int i=0;i<128;++i){
        sum[i]=A[i]+B[i]+addition;
        if(sum[i]>=10){
            addition = sum[i]/10;
        }else{
            addition = 0;
        }
        sum[i]=sum[i]%10;
    }
}

int find_point(char* a){
    for(int i=0;a[i]!='\0';++i){
        if(a[i]=='.') return i;
    }
    return -1;
}

/*
int cal_length(int A[]){
    for(int i=127;i>=0;--i){
        if(A[i]!=0) return i;
    }
    return -1;
}

int cal_length(char *a){
    int i;
    for(i=0;a[i]!='\0';++i);
    return i;
}
*/

void divide_num(char *a,int A[],int B[]){
    if(find_point(a)!=-1)
        str2xiaoshu(a+find_point(a)+1,B);
    a[find_point(a)] = '\0';
    str2zhengshu(a,A);
}

void add_float(char* a, char* b, char* res){
    int zhengshu1[128]={0};
    int zhengshu2[128]={0};
    int xiaoshu1[128]={0};
    int xiaoshu2[128]={0};
    int sum_zhengshu[128];
    int sum_xiaoshu[128];
    int jinwei[128]={1};
    //int len_xiaoshu1=0,len_xiaoshu2=0;
    divide_num(a,zhengshu1,xiaoshu1);
    divide_num(b,zhengshu2,xiaoshu2);
    add_zhengshu(zhengshu1,zhengshu2,sum_zhengshu);
    add_xiaoshu(xiaoshu1,xiaoshu2,sum_xiaoshu);
    if(sum_xiaoshu[0]>=10){
        add_zhengshu(sum_zhengshu,jinwei,sum_zhengshu);
        sum_xiaoshu[0] = sum_xiaoshu[0]%10;
    }
    zhengshu2str(sum_zhengshu,zhengshu);
    xiaoshu2str(sum_xiaoshu,xiaoshu);
    //cout << zhengshu;
    //cout << xiaoshu;
    strcpy(res,zhengshu);
    strcat(res,dot);
    strcat(res,xiaoshu);
    }


int main(){
    char num1[128], num2[128], res[128];
    cin >> num1;
    cin >> num2;
    add_float(num1, num2, res);
    cout << res << endl;
    return 0;
}