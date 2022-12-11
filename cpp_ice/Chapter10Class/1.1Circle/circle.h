#ifndef _Circle
#define _Circle
class Circle{
    private:
        int x,y,r;
    public:
        Circle(int x0,int y0,int r0):x(x0),y(y0),r(r0){};
        void getO(int &x0,int &y0);
        int getR();
        void move(int delta1,int delta2);
        void setR(int new_r);
};
#endif