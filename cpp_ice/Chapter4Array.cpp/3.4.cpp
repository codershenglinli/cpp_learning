/*
任务描述
本关任务：A是一个n行n列的0-1矩阵(n<20)，每行的1都在0的前面，如何确定哪一行的1最多。

编程要求
根据提示，在右侧编辑器补充代码，先输入n，然后输入整个矩阵，输出1的个数最多的行的序号。如果有多行1的个数都是最多，输出序号最小的。思考一下如何提高程序执行效率。
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[20][20]={0};
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> array[i][j];
        }
    }
    int max_in_row=0;
    int max_row = 0;
    for (int i=0;i<n;i++){
        int ones_in_row=0;
        for (int j=0;j<n;j++){
            if (array[i][j]==1){
                ++ones_in_row;
            }
        }
        if (ones_in_row>max_in_row){
            max_in_row = ones_in_row;
            max_row = i;
        }
    }
    cout << max_row;
    return 0;
}