#include <iostream>
using namespace std;

int divide(int A[], int left, int right){
    int k = A[left];
    while(left<right){
    while(left<right&&A[right]>=k){
        --right;
    }
    if(left<right){
        A[left] = A[right];
        ++left;
    }
    while(left<right&&A[left]<=k){
        ++left;
    }
    if(left<right){
        A[right] = A[left];
        --right;
    }
    }
    A[left]=k;
    return left;
}
void quicksort(int A[], int left, int right){
    int mid;
    if(left>=right) return;
    mid = divide(A,left,right);
    quicksort(A,left,mid-1);
    quicksort(A,mid+1,right);
}
int main(){
    int A[10] = {9,8,7,6,5,4,3,6,1,5};
    quicksort(A,0,9);
    for(int i=0;i<10;i++){
        cout << A[i] << ' ';
    }
    return 0;
}