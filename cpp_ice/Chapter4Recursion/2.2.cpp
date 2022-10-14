//找到第二大的数
//冒泡排序
#include <iostream>
using namespace std;

int main()
{
    int array[100]={0};
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    for (int j=0;j<2;j++){
        for (int i=n-1;i>0;i--){
            if (array[i]>array[i-1]){
                int temp=array[i];
                array[i] = array[i-1];
                array[i-1] = temp;           
            }
        }
    }
    cout << array[1];
    return 0;
}
