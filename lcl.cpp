/*判断是否int变量是否溢出本关任务：读入两个正整数a和b，并且a <= b,
    计算并输出闭区间[a, b] 中的X数。X数为各个数位上数字的立方和等于其自身的数字，例如： 153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3 // 153 is a X-number.
                                                                                                                          12 is not equal to 1 *
                                                                                                                          1 * 1 +
                                                                                              2 * 2 * 2 // 12 is not a X-number.
                                                                                                  如果没有找到X数，输出提示信息no*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int a, b, c, ge, shi, bai, c1;
 cin >> a >> b;
 c = a;

int flag = 0, shit = 0;

for (; c <= b; ++c){
    ge = c % 10;
    shi = c % 100 / 10;
    bai = c % 1000 / 100;

    c1 = pow(ge, 3) + pow(shi, 3) + pow(bai, 3);

        if (c1 - c == 0)
        {
        cout << c << " ";
        flag = 1;
        }
        else
        {
        flag = 0;
        }
        shit += flag;
}
  if (shit == 0)
    cout << "no" << endl;

  return 0;
}

/*判断是否int变量是否溢出本关任务：读入两个正整数a和b，并且a <= b,
    计算并输出闭区间[a, b] 中的X数。X数为各个数位上数字的立方和等于其自身的数字，例如： 153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3 // 153 is a X-number.
                                                                                                                          12 is not equal to 1 *
                                                                                                                          1 * 1 +
                                                                                              2 * 2 * 2 // 12 is not a X-number.
                                                                                                  如果没有找到X数，输出提示信息no*/
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a, b, c, ge, shi, bai, c1;
  cin >> a >> b;
  c = a;

  bool flag = 0, shit = 0;

  for (; c <= b; ++c)
  {
    ge = c % 10;
*/