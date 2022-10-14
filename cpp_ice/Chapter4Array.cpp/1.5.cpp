/*
任务描述
本关任务：编写一个能删除数组中重复数据的程序

编程要求
根据提示，在右侧编辑器补充代码，用户输入一组数据（不超过1000个），删除掉其中的重复数据，输出数组中剩余元素个数（假设为n个）,并按照原顺序输出所有数字的首次出现。
注意：不允许引入第二个数组；输出数组中元素时，不再进行新的判断，只能用for(int k=0; k<n; k++) cout<<arr[k]形式
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    int array[1000];
    cin >> array[0];
    int size=1;
    int i=1;
    while(cin>>array[i]){
        bool flag = true;
        for (int j=0;j<size;j++){
            if(array[i]==array[j]){
                flag=false;
                break;
            }
        }
        if(flag) {
            i++;
            size++;
        }
    }

    cout << i <<' ';
    for (int j=0;j<i;j++){
        cout << array[j] << ' ';
    }
    return 0;
}