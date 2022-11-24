#include<iostream>
using namespace std;
int divide(int a[],int low,int high);
void quicksort(int a[],int low,int high){
    int mid;
    if(low>high)   return;
    mid = divide(a,low,high);
    quicksort(a,low,mid-1);
    quicksort(a,mid+1,high);
}

//divide: put the smaller ones before the middle one and return where mid is; 
//a[0] is the value of mid;
int divide(int a[],int low,int high){
    //store the num_in_mid first, reuse it in the end;
    int num_in_mid = a[low];
    while(low<high){
        while(a[high]>=num_in_mid&&low<high){
            -- high;
        }
        //no need to exhcange, because there is always a blank left out!
        a[low] = a[high];
        while(a[low]<=num_in_mid&&low<high){
            ++ low;
        }
        a[high] = a[low];
    }
    a[low]=num_in_mid;
    return low;
}

int main(){
    int a[5] = {8,5,4,2,2};
    quicksort(a,0,4);
    for (auto i : a){
        cout << i;
    }
}