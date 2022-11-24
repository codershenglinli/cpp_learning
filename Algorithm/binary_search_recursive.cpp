#include <iostream>
#include <cstring>
using namespace std;

int binarySearch(char *cityTable[], int low, int high, char *cityName)
{
    if(low<=high){
        int mid = (low+high)/2;
        if(strcmp(cityTable[mid],cityName)==0){
            return mid;
        }
        if(strcmp(cityTable[mid],cityName)>0){
            return binarySearch(cityTable,low,mid-1,cityName);
        }
        if(strcmp(cityTable[mid],cityName)<0){
            return binarySearch(cityTable,mid+1,high,cityName);
        }
    }
    else{
        return -1;
    }
    
}

int main(){
    char *city[10]{
        "1","2","3","4","5","6","7","8","9"
    };
    cout << binarySearch(city,0,8,"10");
}