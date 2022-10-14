#include <iostream>
using namespace std;

int main()
{
    int n;
    int num_positive=0;
    int num_negative=0;
    do{
        cin >> n;
        if(n>0) num_positive++;
        if(n<0) num_negative++;
    }while(n);
    cout << num_positive << ' ' << num_negative;
    return 0;
}
