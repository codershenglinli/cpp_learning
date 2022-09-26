//5.2.2二分查找
#include<iostream>
using namespace std;

int main(){
    int low,high,mid,goal=0;
    int array[]={0,1,2,3,4,5,6,7,8,9};
    low = 0;
    high = 9;
    while (low<=high){
        mid = (low+high)/2;
        if (array[mid]<goal) low = mid+1;
        if (array[mid]>goal) high = mid-1;
        if (array[mid]==goal) {
            break;
        }
    
    }
    if (low>high) cout << "Nope" <<endl;
    else cout << mid <<endl;
    return 0;
}