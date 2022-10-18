/*
任务描述
本关任务：在一个长度为L米的平台上，放着N个质量相同的小球，每个小球的初始速度都为1m/s，小球的运动方向按照摆上去的顺序间隔着向左或者向右，第一个摆上去小球的运动方向向右。我们认为小球的体积很小，碰撞满足动量守恒定律，且发生完全弹性碰撞，碰撞不发生能量损失，碰撞的时间非常短暂可以忽略。问平台上的第一个和最后一个掉落的小球分别是在什么时候掉下去的。

编程要求
根据提示，在右侧编辑器补充代码，用户首先输入2个整数，表示小球的数量N(<10000)和平台的长度L。然后输入N个整数，分别表示小球在平台上的位置，按照小球摆上去的顺序给出，平台的左端点位置为0，右端点位置为L。保证开始的时候没有两个小球在一个位置。输出两个整数，分别表示小球最早掉下去的时间和最晚掉下去的时间，用空格分隔。
*/

#include <iostream>
using namespace std;

int main(){
    int n,l;
    cin >> n >> l;
    int array[10000];
    
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    int max1=0,min1=l;
    for(int i=0;2*i<n;i++){
        if (l-array[2*i]>max1) max1=l-array[2*i];
        if (l-array[2*i]<min1) min1=l-array[2*i];
    }

    int max2=0,min2=l;
    for (int i=1;2*i-1<n;i++){
        if(array[2*i-1]>max2) max2=array[2*i-1];
        if(array[2*i-1]<min2) min2=array[2*i-1];
    }

    cout << min(min1,min2) <<' '<< max(max1,max2); 
    return 0;
}