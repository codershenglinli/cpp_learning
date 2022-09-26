#include <iostream>
#include <cmath>
using  namespace std;

double distance(double x1,double y1,double x2,double y2){
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{   
    double input_x,input_y;
    cin >> input_x >>input_y;
    if (distance(input_x,input_y,2,2)>1&&distance(input_x,input_y,-2,2)>1&&distance(input_x,input_y,-2,-2)>1&&distance(input_x,input_y,2,-2)>1)
    {
        cout << 0;
    }else{
        cout << 10;
    }
    return 0;
}