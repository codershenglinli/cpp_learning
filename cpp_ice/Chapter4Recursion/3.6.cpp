#include<iostream>
using namespace std;

int main(){
    int one=0,five=0,sixteeen=0,twentythree=0,thirtythree=0;
    int n;
    cin >>n;

    int num = n;
    for(thirtythree=0;33*thirtythree<=n;thirtythree++){
        for(twentythree=0;23*twentythree<=n;twentythree++){
            for(sixteeen=0;16*sixteeen<=n;sixteeen++){
                for(five=0;5*five<=n;five++){
                    for(one=0;one<=n;one++)
                        if(one+5*five+16*sixteeen+23*twentythree+33*thirtythree==n&&num>one+five+sixteeen+twentythree+thirtythree){
                            num=one+five+sixteeen+twentythree+thirtythree;
                    }
                }
            }
        }
    }
    cout <<num<<' ';
    one=0,five=0,sixteeen=0,twentythree=0,thirtythree=0;
    if(n>=33){thirtythree=n/33;n%=33;}
    if(n>=23){twentythree=n/23;n%=23;}
    if(n>=16){sixteeen=n/16;n%=16;}
    if(n>=5){five=n/5;n%=5;}
    if(n>=1){one=n;}
    num=one+five+sixteeen+twentythree+thirtythree;
    cout << num;
}