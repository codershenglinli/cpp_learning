/*
本关任务：有n盏灯，编号为1~n。第1个人把所有灯打开，第2个人按下所有编号为2的倍数的开关（这些灯将被关掉），第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），依次类推。一共有k个人，问最后有哪些灯开着？

编程要求
根据提示，在右侧编辑器补充代码，输入正整数n和k（k≤n≤1000），从小到大输出开着的灯的编号。

*/
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int array[100]={0};
    for (int j=1;j<=k;j++){
        for (int i=j-1;i<n;i+=j){
            array[i] = array[i] ^ 1;
        }
    }
    for (int i=0;i<n;i++){
        if (array[i]==1)
            cout << i+1 <<' ';
    }
    return 0;
}