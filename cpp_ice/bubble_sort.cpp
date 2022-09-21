#include <iostream>
using namespace std;
int main ()
{
	/********** Begin **********/ 
    int n;
    cin >> n;
    int numbers[100]={0};
    for (int i=0;i<n;i++){
        cin >> numbers[i];
    }
    for (int i=1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if (numbers[j]>numbers[j+1]){
                int t;
                t = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=t;
            }
        }
        
        for (int k=0;k<n;k++){
            cout << numbers[k]<<' ';
        }
        cout <<endl;
        
        
    }

	/********** End **********/	
	return 0;
}
