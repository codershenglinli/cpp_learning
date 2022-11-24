#include <iostream>
#include <ctype.h>
using namespace std;

int word_cnt(const char *s)
{
    int cnt = 0;
    while (*s != '\0')
    {
        while (isspace(*s))
            ++s;
        if (*s != '\0')
        {
            ++cnt;
            while (!isspace(*s) && *s != '\0')
                ++s;
        }
    }
    return cnt;
}

int main()
{
    char h[6] = "Hello";
    cout << word_cnt(h);
}