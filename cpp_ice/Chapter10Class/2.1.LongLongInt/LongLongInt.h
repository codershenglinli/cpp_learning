#ifndef _LLInt
#define _LLInt
class bigInt{
    //友元函数
    friend bigInt sum(const bigInt &a, const bigInt &b);
    private:
        void reverse();
        int n;  //n代表不包括结束符的字符串长度
        char *ptr;
    public:
        void read();
        void show();
        ~bigInt() {if(ptr) delete []ptr;}
};

//bigInt sum(const bigInt &a, const bigInt &b);
#endif