/*
任务描述
本关任务：5*5的格子中，每个格子代表一盏灯，点击一次，此格子和上下左右相邻的共5个格子中的灯的状态会发生反转，亮着的会熄灭，熄灭的会点亮。如何用最少的点击次数使所有的灯都点亮？（亮灯用1表示，熄灭状态用0表示）

编程要求
根据提示，在右侧编辑器补充代码，输入五行，每行五个数值(0或1)，表示当前格子的状态。输出对于输入数据中对应的当前状态最少需要几步才能使25个格子都变亮。如果不能使25个格子都变亮，输出-1。尽量提高计算效率。
*/

#include <iostream>
using namespace std;

int main(){
    int input[5][5]={0};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            input[i][j]=cin.get()-'0';
        }
        cin.get();
    }

    int ans=-1;
    int control[5]={0};
    for(int a1=0;a1<2;a1++){
        control[0]=a1;
        for(int a2=0;a2<2;a2++){
            control[1]=a2;
            for (int a3=0;a3<2;a3++){
                control[2]=a3;
                for (int a4=0;a4<2;a4++){
                    control[3]=a4;
                    for (int a5=0;a5<2;a5++){
                        //五个循环控制第一行的掩码
                        int output[5][5]={0};
                        control[4]=a5;
                        //转移输入，防止篡改原始数据
                        int array[5][5]={0};
                        for(int x1=0;x1<5;x1++){
                            for(int x2=0;x2<5;x2++){
                                array[x1][x2]=input[x1][x2];
                            }
                        }
                        //对第一行进行变换
                        
                        for (int i=0;i<5;i++){
                            if(i==0){
                            array[0][0]=array[0][0]^control[0];
                            array[1][0]=array[1][0]^control[0];
                            array[0][1]=array[0][1]^control[1];
                            }
                            else if(i==4){
                            array[0][i]=array[0][i]^control[i];
                            array[0][i-1]=array[0][i-1]^control[i];
                            array[1][i]=array[1][i]^control[i];    
                            }else{
                            array[0][i]=array[0][i]^control[i];
                            array[0][i-1]=array[0][i-1]^control[i];
                            array[0][i+1]=array[0][i+1]^control[i];
                            array[1][i]=array[1][i]^control[i];
                            }
                        }
                        

                        //计算变换次数
                        int count =a1+a2+a3+a4+a5;
                        //对后四行进行变换
                        for(int row=1;row<5;row++){
                            for (int col=0;col<5;col++){
                                if (array[row-1][col]==0){
                                    ++count;
                                    if(col==0){
                                    array[row][col]=array[row][col]^1;
                                    array[row-1][col]=1;
                                    array[row+1][col]=array[row+1][col]^1;
                                    //array[row][col-1]=array[row][col-1]^1;
                                    array[row][col+1]=array[row][col+1]^1;
                                    }
                                    else if(col==4){
                                    array[row][col]=array[row][col]^1;
                                    array[row-1][col]=1;
                                    array[row+1][col]=array[row+1][col]^1;
                                    array[row][col-1]=array[row][col-1]^1;
                                    //array[row][col+1]=array[row][col+1]^1;
                                    }
                                    else if(row==4){
                                    array[row][col]=array[row][col]^1;
                                    array[row-1][col]=1;
                                    //array[row+1][col]=array[row+1][col]^1;
                                    array[row][col-1]=array[row][col-1]^1;
                                    array[row][col+1]=array[row][col+1]^1;
                                    }else{
                                    array[row][col]=array[row][col]^1;
                                    array[row-1][col]=1;
                                    array[row+1][col]=array[row+1][col]^1;
                                    array[row][col-1]=array[row][col-1]^1;
                                    array[row][col+1]=array[row][col+1]^1;
                                    }
                                }
                            }
                        }

                            //检查最后一行是否符合
                            bool flag = true;
                            for (int j=0;j<5;j++){
                                if(array[4][j]!=1){
                                    flag=false;
                                    break;
                                }
                            }
                            if(flag){
                                if (ans == -1 || count < ans){
                                    ans = count;
                                }
                                //cout << count <<endl;
                            }
                        
                    }
                }
            }
        }
    }

    
    cout << ans;

    return 0;
    
}