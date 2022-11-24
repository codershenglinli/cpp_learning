#include <iostream>
#include <cstring>
using namespace std;
bool decreaseInt(int x,int y){
    return x>y;
}
template <class T>
void sort(T a[], int size, bool (*f)(T,T)){
    bool flag;
    int i,j;
    for(int i=1;i<size;++i){
        flag = false;
        for(j=0;j<size-i;++j){
            if(f(a[j+1],a[j])){
                T tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag = true;
            }
        }
        if(!flag) break;
    }
}

int main(){
    int a[5]={1,2,3,4,5};
    char *s[2]={"ABC","BCD"};
    sort<int>(a,5,decreaseInt);
    sort<char *> (s,2,[](char *x,char *y)->bool {return strcmp(x,y)<0; });
    for(int i=0;i<5;++i){
        cout << a[i]<<'\t';
    }
    for(int i=0;i<2;++i){
        cout << s[i]<<'\t';
    }
}