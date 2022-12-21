/*
约瑟夫环类Joseph上机实验
Description
请设计并实现一个解决约瑟夫环问题的类Joseph，当需要解决一个n个人的约瑟夫环问题，同时能调整喊到数字m的人退出。

能实现两个功能：

输出删除过程
输出最后一个人
Note
本题需要你编辑main.cpp, class.h, class.cpp三个文件

Input Format
整型数n 整型数m

Output Format
第一行一个 整型数，表示最后一个人

第二行开始 输出删除过程，用空格分开，最后一个数字后无空格。

Sample Input 1
6 4
Sample Output 1
4 2 1 3 6
5
*/
#include "class.h"
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    RLList loop(a);
    loop.del(b);

}