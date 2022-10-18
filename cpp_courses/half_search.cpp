#include <iostream>
using namespace std;

int main(){
    int lh,rh,mid;
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    lh=0,rh=9;
    int x =5;
    while (lh<=rh){
        mid = (lh+rh)/2;
        if (x==array[mid]) break;
        if (x>array[mid]) lh = mid+1;
        else rh = mid-1;
    }

    if(lh>rh) cout << "Nope!";
    else cout << mid;
    return 0;
}