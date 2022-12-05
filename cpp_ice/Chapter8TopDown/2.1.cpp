/*
Logo语言在个人计算机用户计算中非常流行，该语言形成了龟图的概念。假设有个机器海龟，通过C++控制在房子中移。在两个方向之一打开画笔，即向上或向下。
画笔向下时，海龟跟踪移动的形状并留下移动的路径；画笔向上时，海龟自由移动，不写下任何东西。在这个问题中，要模拟海龟的操作和生成计算机化的草图框。
用20X20数组floor，初始化为0。跟踪任何时候海龟当前的位置和画笔的向上或向下状态。假设海龟总是从位置0，0开始，画笔向上。程序要处理的海龟命令如下：

命令	含义
1	笔向上
2	笔向下
3	左转
4	右转
5 n	前进n格（n为正整数）
6	打印20*20数组
9	数据结束（标记）
当收到向下命令后，画笔仅仅向下，不改变当前位置的值，当画笔向下并移动海龟时，将数组floor的相应元素设置为1（但不影响起始点的值）。指定命令6（打印）时，只要数组元素值为1，就显示星号或其他符号，而数组元素值为0则显示空白。

任务要求
你的任务是自行设计函数，并且在main函数中调用自己设计的函数，完成题目的要求。
*/
#include <iostream>
#include <cstring>

using namespace std;

void showOption(){
    cout<<"欢迎来到Logo绘制系统："<<endl;
    cout<<"1--笔向上"<<endl;
    cout<<"2--笔向下"<<endl;
    cout<<"3--左转"<<endl;
    cout<<"4--右转"<<endl;
    cout<<"5 n--前进n格（n为正整数）"<<endl;
    cout<<"6--打印20*20数组"<<endl;
    cout<<"9--数据结束（标记）"<<endl;
}



// Your code here
class turtle
{
private:
    int canvas[20][20]={0};
    bool putDown = false;
    int dir = 2;//:up,1:right,2:down,3:left
    int x=0;
    int y=0;
public:
    //turtle();
    //~turtle();
    void print(){
        for(int i=0;i<20;++i){
            for(int j=0;j<20;++j){
                if(canvas[i][j])cout << '*';
                else cout << ' ';
            }
            cout << endl;
        }
    }
    void turn_left(){
        dir = (dir+4-1)%4;
    }
    void turn_right(){
        dir = (dir+1)%4;
    }
    void set_pen(bool opt){
        putDown = opt; 
        if(opt){
            canvas[x][y]=1;
        }       
    }
    void run(int n){
        if(dir==0){
            if(putDown)canvas[x][y]=1;
            for(int i=1;i<=n;++i){
                --x;
                if(putDown)canvas[x][y]=1;
            }
        }else if(dir==2){
            if(putDown)canvas[x][y]=1;
            for(int i=1;i<=n;++i){
                ++x;
                if(putDown)canvas[x][y]=1;
            }
        }else if(dir==3){
            if(putDown)canvas[x][y]=1;
            for(int i=1;i<=n;++i){
                --y;
                if(putDown)canvas[x][y]=1;
            }
        }else if(dir==1){
            if(putDown)canvas[x][y]=1;
            for(int i=1;i<=n;++i){
                ++y;
                if(putDown)canvas[x][y]=1;
            }
        }
    }

};

// turtle::turtle()
// {
//     for(int i=0;i<20;++i){
//         for(int j=0;j<20;++j){
//             canvas[i][j]=0;
//         }
//     }
//     direction = up;
//     x=0;
//     y=0;
// }

// turtle::~turtle()
// {
// }

// int floor[20][20];

int user_option(){
    int i;
    cin >> i;
    return i;
}

int main()
{
    showOption();
    // Your code here
    int option;
    turtle t1;
    while((option=user_option())!=9){
        switch (option)
        {
        case 1:
            t1.set_pen(false);
            break;
        case 2:
            t1.set_pen(true);
            break;
        case 3:
            t1.turn_left();
            break;
        case 4:
            t1.turn_right();
            break;
        case 5:
            int n;
            cin >> n;
            t1.run(n);
            break;
        case 6:
            t1.print();



        
        default:
            break;
        }
    }

    return 0;
}
