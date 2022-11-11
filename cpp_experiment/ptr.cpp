#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

int main(){
    int *p;
    char *q;
    
    p=new int(99);
    assert(p!=NULL);
    q=new char[10]; //字符串的指针
    strcpy(q,"abcde");
    cout << *p << q << endl;
    cout << p << '\t' << (void *) q <<endl;

    const char *String;
    String = "abcde";

    char *String, ss[] = "abcdef";
    String = ss;

    char *String3;
    String3 = new char[10];
    strcpy(String3,"abc");

}

void add(const char *p1,const char *p2,char *s){
    int i,j=0;

    for(i=0;i<128;++i){
        s[i] = p1[i] - '0' +p2[i] -'0' + j;
        if(s[i]>=10) j = s[i]/10;else j=0;
        s[i] = s[i]%10 +'0';
    }
}