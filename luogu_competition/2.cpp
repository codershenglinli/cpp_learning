#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    bool is_odd;
    if (n%2==0) is_odd = false;
    else is_odd =true;
    int *array;
    array = new int[n];
    for (int i=0;i<n;i++) {
        int status;
        cin >> status;
        array[i]=status;
    }

    for (int i=0;i<n;i++){
        if (array[i]==3){
            if(array[(i-1+n)%n]<2)    array[(i-1+n)%n]=2;
            if(array[(i+1)%n]<2)    array[(i+1)%n]=2;
            if(is_odd){
                int opposite1=(i+n/2)%n;
                int opposite2=(i+n/2)%n+1;
                if (array[opposite1]<2){
                    array[opposite1] = 2;
                }
                if (array[opposite2]<2){
                    array[opposite2] = 2;
                }
            }
            else{
                int opposite1=(i+n/2)%n;
                if (array[opposite1]<2){
                    array[opposite1] = 2;
                }
            }
        }
        }
    for (int i=0;i<n;i++){    
        if (array[i]==2){
            if(array[(i-1+n)%n]<1)   array[(i-1+n)%n]=1;
            if(array[(i+1)%n]<1)   array[(i+1)%n]=1;
        }    
    }
    for(int i=0;i<n;i++){
        cout << array[i]<< ' ';
    }
    delete [] array;
    return 0;
}
