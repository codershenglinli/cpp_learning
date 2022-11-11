#include <iostream>
using namespace std;

int main(){
    int A[8] = {1,2,3,4,5,6,7,8};
    for(int i=1;i<8;i++){
        for(int j=8-1;j>=i;--j){
            //for(int j=0;j<8-i;++j)
            if(A[j]>A[j-1]){
                int temp = A[j];
                A[j] = A [j-1];
                A[j-1] = temp;
            }
        }
    }

    for(int i=0;i<8;i++){
        cout << A[i] << endl;
    }
    return 0;
}