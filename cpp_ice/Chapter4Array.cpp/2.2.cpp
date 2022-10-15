/*
任务描述
本关任务：在矩阵中，一个元素在所在行中是最大值，在所在列中是最小值，则被称为鞍点（Saddle point）。求所给矩阵的鞍点

编程要求
根据提示，在右侧编辑器补充代码，用户输入两个正整数 m 和 n（m，n≤10），然后输入该 m 行 n 列矩阵 mat 中的元素，如果找到 mat 的鞍点，就输出它的下标；如果找到多个鞍点，则分行输出它们的下标（行下标小的鞍点优先输出）；否则，输出“Not Found”。
*/
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int mat[10][10] = {0};
    
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin >> mat[i][j];
        }
    }
    
    bool exist = false;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            bool flag = true;
            int curr = mat[i][j];
            for (int p=0;p<n;p++){
                if (curr<mat[i][p]){
                    flag = false;
                    break;
                }
            }
            for (int k=0;k<m&&flag;k++){
                if (curr > mat[k][j]) {
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout << "mat[" << i << "][" << j << "]=" << curr <<endl;
                exist = true;
            }
            
        }
    }

    if(!exist)  cout << "Not Found" <<endl;
}
    
