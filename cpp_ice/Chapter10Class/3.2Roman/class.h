#ifndef _RomanWithInt
#define _RomanWithInt
class RomanWithInt
{
private:
    static char cset[7];
    int num;
    char letters[100];
    void Str2Int(char input[]);
    static void Int2RomanRecursive(int n,int i);
public:
    void Int2Roman(char input[]);
    void Roman2Int(char input[]);
    void print_int();
    void print_roman();
};
#endif

