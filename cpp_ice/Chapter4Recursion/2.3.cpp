#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int array[100]={0};
    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    for (int i=0;i<=n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(array[j]==i) flag=true;
        }
        if (!flag) cout << i;
    }
    return 0;
}