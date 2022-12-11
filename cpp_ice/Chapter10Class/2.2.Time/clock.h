#ifndef _Clock
#define _Clock
class Clock{
    private:
        int hour;
        int min;
        int sec;
        bool judge(const Clock &c1, const Clock &c2);
        void minus(const Clock &c1, const Clock &c2);
    public:
        void input();
        void delta(const Clock &c1, const Clock &c2);
        void show();

};
#endif