/*
设计一个股票价格分析程序，实现对一支股票价格和买卖策略的分析。它具有如下功能：

命令 1 ：开始输入股票价格序列，以空格分隔，-1结束输入。它的第 i 个元素是一支给定股票第 i 天的价格。若之前存在序列，则将先前序列清空后更新为当前输入序列。

命令 2 ：查询股票价格。将当前股票的价格序列输出在屏幕上。

命令 3 ：将股票价格序列按升序排序后输出在屏幕上。

命令 4：输出出现股票价格最大值和最小值的日期。

命令 5 ：如果你最多只允许完成一笔交易（即买入和卖出一支股票一次），输出你所能获取的最大利润。注意：你不能在买入股票前卖出股票。如，当前的股票价格序列为[7,1,5,3,6,4]，则输出结果为5。具体买卖方式为：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6-1 = 5 。注意利润不能是 7-1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。

命令 6 ：如果你可以尽可能地完成更多的交易（多次买卖该股票），输出你所能获得的最大利润。注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。如，当前股票价格序列为[7,1,5,3,6,4]，则输出结果为7。具体买卖方式为：在第 2 天（股票价格 = 1）的时候买入，在第 3 天（股票价格 = 5）的时候卖出, 这笔交易所能获得利润 = 5-1 = 4 。随后，在第 4 天（股票价格 = 3）的时候买入，在第 5 天（股票价格 = 6）的时候卖出, 这笔交易所能获得利润 = 6-3 = 3 。

命令 7 ：退出

程序运行时，出现菜单：

欢迎使用股票分析系统：
1 -- 输入股票价格序列
2 -- 查询股票价格
3 -- 输出升序的股票价格序列
4 -- 输出最大值和最小值日期
5 -- 一笔交易的最大利润
6 -- 多笔交易的最大利润
*/
#include <iostream>
#include <cstdio>

using namespace std;

void showOption(){
    cout<<"欢迎使用股票分析系统："<<endl;
    cout<<"1--输入股票价格序列"<<endl;
    cout<<"2--查询股票价格"<<endl;
    cout<<"3--输出升序的股票价格序列"<<endl;
    cout<<"4--输出最大值和最小值的日期"<<endl;
    cout<<"5--一笔交易的最大利润"<<endl;
    cout<<"6--多笔交易的最大利润"<<endl;
    cout<<"7--退出"<<endl;
}

int sequence[100];
void inputSequence(){
    //return the length of array;
    int i=0;
    while(true){
        cin >> sequence[i];
        if(sequence[i]==-1) return;
        ++i;
    }
}

void outputSequence(){
    for(int i=0;sequence[i]!=-1;++i){
        cout << sequence[i] << ' ';
    }
    cout << endl;
}

template <class T>
void general_bubble_sort(T a[], int size, bool (*f)(T,T)){
    for(int i=1;i<size;++i){
        for(int j=0;j<size-i;++j){
            if(f(a[j+1],a[j])){
                T temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
// Your code here

int cal_length(int a[]){
    int i=0;
    for(;a[i]!=-1;++i);
    return i;
}

void outputIncreasing(){
    int temp[100];
    for(int i=0;i<100;++i){
        temp[i]=sequence[i];
    }
    general_bubble_sort<int>(temp,cal_length(temp),[](int x,int y){return x<y;});
    for(int i=0;temp[i]!=-1;++i){
        cout << temp[i] << ' ';
    }
    cout << endl;
}
int player_choice();

int find(int a[],int size,bool (*f)(int,int)){
    int min_max = a[0];
    int place = 0;
    for(int i=0;i<size;++i){
        if(f(a[i],min_max)){
            min_max = a[i];
            place = i;
        }
    }
    return place;
}

void outputMaxMin(){
    cout << find(sequence,cal_length(sequence),[](int x,int y){return x<y;});
    cout << ' ';
    cout << find(sequence,cal_length(sequence),[](int x, int y){return x>y;});
    cout << endl;
}

void outputSingleMaxProfit(){
    int n = cal_length(sequence);
    int ans = 0;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(sequence[j]-sequence[i]>ans){
                ans = sequence[j]-sequence[i];
            }
        }
    }
    cout << ans <<endl;
}

int out_put_max_profit();

int main()
{
    // Your code here
    int choice;
    showOption();
    while((choice = player_choice())!=7){
        switch(choice){
            case 1:
                inputSequence(); break;
            case 2:
                outputSequence(); break;
            case 3:
                outputIncreasing();break;
            case 4:
                outputMaxMin();break;
            case 5:
                outputSingleMaxProfit();break;
            case 6:
                out_put_max_profit();break;

        }
    }
    return 0;
}

int out_put_max_profit(){
    int sum=0;
    for(int i=0;i<cal_length(sequence)-1;++i){
        if(sequence[i+1]>sequence[i]){
            sum+=sequence[i+1]-sequence[i];
        }
    }
    cout << sum << endl;
}

int player_choice(){
    
    int i;
    cin >> i;
    return i;
}