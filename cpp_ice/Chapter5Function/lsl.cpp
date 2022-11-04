/*根据提示，在右侧编辑器补充代码，用户首先输入英文文章的行数n（1≤n≤10），
接着依次输入n行内容（每行少于80个字符）。
要求统计出其中的英文字母（不区分大小写）、数字和其它非空白字符的个数。
*/
#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char mat[10][80], mat2[2][100];
    int jnum[80];

    int linenum, shunum, funum, munum, i, j;
    linenum = shunum = munum = funum = 0;

    cin >> linenum;
    i = j = 0;
    // input文章
    while (i < linenum + 1)
    {
        cin.getline(mat[i], 80, '\n');

        jnum[i] = strlen(mat[i]);

        ++i;
    }
    i = j = 0;

    //分出各行，分别统计

    for (i = 1; i < linenum + 1; ++i)
    {
                for (j = 0; j < jnum[i]; ++j)

        {
            if (int(mat[i][j]) == 32)
            {
                continue;
            } //空格直接过

            if ((int(mat[1][j]) < 91 && int(mat[i][j]) > 64) + (int(mat[i][j]) > 96 && int(mat[i][j]) < 123) == 1)
                munum++;
            else if (int(mat[i][j]) < 58 && int(mat[i][j]) > 47)
                shunum++;
            else
                funum++;
        }
    }
    cout << "英文字母：" << munum << "\n"
         << "数字：" << shunum << "\n"
         << "其他字符：" << funum << endl;

    return 0;
}