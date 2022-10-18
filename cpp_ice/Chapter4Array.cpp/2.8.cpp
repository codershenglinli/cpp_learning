/*
任务描述
本关任务：对于一个给定的有序数组，求出目标值x在该数组中第一次和最后一次出现的位置

编程要求
根据提示，在右侧编辑器补充代码，用户先输入n，然后输入一个规模为n的有序数组，再输入目标值下，求出目标值x在该数组中第一次和最后一次出现的位置，如果x未出现在数组中，输出两个-1。请尽量提高计算效率。
*/

#include <iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    int array[1000];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    cin >> x;
    int first=-1,last=-1;
    bool exist = false;
    for (int i=0;i<n;i++){
        while(!exist){
        if(array[i]==x){
            first = i;
            exist = true;
        }
        break;}
        if(array[i]==x) last = i;
    }
    cout << first << ' ' << last;
    return 0;
}