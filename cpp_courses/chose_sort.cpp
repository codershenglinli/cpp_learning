//选择排序算法
//时间复杂度O(n^2)
#include <iostream>
using namespace std;

int main(){
    int rh,lh;
    int array[10] ={0,1,2,3,4,9,6,7,8,5};
    for(lh=0;lh<10;lh++){
        rh = lh;
        for(int k=lh;k<10;k++){
            if(array[k]<array[rh]) rh =k;
        }
        int temp = array[lh];
        array[lh]=array[rh];
        array[rh] = temp;
    }
    for (int i=0;i<10;i++)
        cout << array[i];

    return 0;
}