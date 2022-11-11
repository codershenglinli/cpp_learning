#include <iostream>
#include <cstring>
using namespace std;

//Abstration of a number.Using reversed arrays.
int zhengshu1[128];
int zhengshu2[128];
int xaoshu1[128];
int xiaoshu2[128];

void str2num(const char *a,int A[]){
    //Convert string to number
    for(int i=strlen(a)-1,j=0;i>=0;--i,++j){
        A[j] = a[i] - '0';
    }
    for(int i=strlen(a);i<128;++i){
        A[i] = 0;
    }
}

void num2str(const int A[],char *a){
    //Convert num to string
}

//In such implementation, the last digit is aligned ,easy to add!
void add_num(int A[],int B[],int sum[]){
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
int main(){
    
    return 0;
}