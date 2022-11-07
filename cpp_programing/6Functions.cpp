#include <iostream>
using namespace std;

void min_max(int A[],int n,int &min,int &max){
    int min1,min2,max1,max2;
    switch (n)
    {
    case 1:
        min=max=A[0];
        return;

    case 2:
        if(A[0]<A[1]){
            min = A[0];
            max = A[1];
        }else{
            min = A[1];
            max = A[0];
        }
        return;
    default:
        min_max(A,n/2,min1,max1);
        min_max(A+n/2,n-n/2,min2,max2);
        min = min1<min2?min1:min2;
        max = max1>max2?max1:max2;
        return;
    }
}
int main(){
    int min,max;
    int A[]={1,2,3,4,5};
    min_max(A,5,min,max);
    cout << min <<max;

}