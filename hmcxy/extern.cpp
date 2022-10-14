#include<iostream>
#include <ctime>
using namespace std;

int dt(){
    static int last = time(NULL);   //只会初始化一次，后续不会再进行初始化！
    static int curr = time(NULL);
    //cout << last << '\t';
    curr = time(NULL);
    //cout << curr <<endl;
    int dt = curr - last;
    last = curr;
    getchar();
    return dt;
}
extern int external_var;
int main(){
    while(1) cout << dt();
    return 0;
}