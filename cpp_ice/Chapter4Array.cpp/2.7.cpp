//四则运算
#include <iostream>
using namespace std;

int main(){
    char ch[100]="";
    cin.getline(ch,100);
    int n1=0,n2=0;
    int i=0;
    for(;ch[i]!='+'&&ch[i]!='-'&&ch[i]!='*'&&ch[i]!='/';i++){
        n1 = n1*10+ch[i]-'0';
    }
    char exp = ch[i];
    for(i++;ch[i]!='\0';i++){
        n2 = n2*10+ch[i]-'0';
    }

    switch (exp){
        case '+':
            cout <<n1<<'+'<<n2<<'='<< n1+n2;break;
        case '-':
            cout <<n1<<'-'<<n2<<'='<< n1-n2;break;
        case '*':
            cout <<n1<<'*'<<n2 <<'='<<n1*n2;break;
        case '/':
            cout <<n1<<'/'<<n2<<'='<< n1/n2;break;
    }
    return 0;
}