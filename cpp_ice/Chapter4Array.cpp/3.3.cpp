/*
任务描述
本关任务：已知一个规模为n的有序整数数组，再输入整数x，判断x是否在数组中，如果是，则输出相应下标，如果否，则x插入数组哪个位置能够使数组仍然有序。

编程要求
根据提示，在右侧编辑器补充代码，输入正整数n(n<1000)，再输入n个有序整数以构成数组，再输入整数x，判断x是否在数组中，如果是，则输出相应下标，如果否，则求出x插入数组哪个位置能够使数组仍然有序。尽量提高算法效率。
*/
#include <iostream>
using namespace std;
const int N = 1000;
int main(){
    int n;
    int array[N]={0};
    cin >> n;
    
    for (int i=0;i<n;i++){
        cin >> array[i];
    }

    int x;
    cin >> x;
    int lh=0,rh=n-1;
    while(lh<=rh){
        int mid = (lh+rh)/2;
        if (array[mid]==x){
            cout << mid;
            break;
        }
        if (x<array[mid]){
            rh = mid-1;
        }
        if (x>array[mid]){
            lh = mid+1;
        }

    }
    if (lh > rh) cout << lh;
    return 0;
}