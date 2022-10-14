/*
任务描述
本关任务：编写一个能删除数组中重复数据的程序。

编程要求
根据提示，在右侧编辑器补充代码，输入一组数据（不超过1000个），“利用一个新的数组”保存其中唯一的元素出现，按照原顺序输出所有数字的首次出现。
注意：
（1）要求引入第二个数组；
（2）输出数组中元素时，不再进行新的判断，只能用for(int k=0; k<n; k++) cout<<arr[k]形式；
（3）如果需要读入所有输入的整数，可以采用while(cin>>x)这种形式。其表示循环读入数据，并将其放入变量x中。当cin读不到新的数据时候，循环终止。在键盘输入时，可以通过ctrl+z结束输入，此时cin>>x结果为false。
*/
#include<iostream>
using namespace std;

int main(){
    int array1[1000];
    int n=0;
    while(cin>>array1[n]){
        n+=1;
    }

    int array2[1000];
    array2[0]=array1[0];
    int num_in_array2 = 1;
    for(int k=1;k<n;k++){
        bool flag=true;
        for (int j=0;j<num_in_array2;j++){
            if(array1[k] == array2[j]){
                flag=false;break;
            }
        }
        if(flag){
            array2[num_in_array2]=array1[k];
            num_in_array2++;
        }
    }

    for (int j=0;j<num_in_array2;j++){
        cout << array2[j]<<' ';
    }


    return 0;
}