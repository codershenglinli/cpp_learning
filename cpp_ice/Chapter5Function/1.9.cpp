#include <iostream>
using namespace std;

int CountDigit(int number,int digit)
{
    int count=0;
    if(number==0&digit==0)  return 1;
    for(;number!=0;number/=10){        
        int curr_digit = number % 10;
        if(curr_digit==digit)   ++count;
    }
    return count;
}
int main(){
    cout << CountDigit(1222,0);
    
    return 0;
}