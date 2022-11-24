#include <iostream>
using namespace std;

int convert2int(char s[],int &start){
    //start us used to track the first letter of a number
    int base;   //track the base of input
    
    //judge the base of the number
    if(s[start]!=0){
        base = 10;
    }else if(s[start+1]=='x'){
        base = 16;
        start+=2;   //start now point on the first letter of the actual number
    }else{
        base = 8;
        ++start;
    }

    //the most essential part!
    int ans=0;
    while(s[start]!=' '&&s[start]!='\0'){
        //scan the whole letter
        if(base==10){
            ans = ans*10+s[start++]-'0';
        }
        if(base==16){
            ans = ans*16;
            if(s[start]>='A'&&s[start]<='F'){
                ans += s[start]-'A'+10;
            }else{
                ans +=s[start]-'0';
            }
        }
    }
    return ans;
}

int main(){
    char s[10]="1 2 3 4";
    int i=0;    //point at the first letter of the string
    int sum=0;
    while(s[i]==' '&&s[i]!='\0')    ++i;    //jump through the first blacks
    while(s[i]!='\0'){
        sum += convert2int(s,i);
        //the whole thing is redundant
        //we have already read the whole number in the function!!!
        /*
        while(s[i]!=' '&&s[i]!='\0'){
            ++i;
        }
        */
        //solution: & reference
        while(s[i]==' '&&s[i]!='\0'){
            ++i;
        }
    }
    cout << sum;
}