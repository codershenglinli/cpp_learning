#include <iostream>
using  namespace std;
int main ()
{ 

    int n=3;
    int array[10];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }
    int insert;
    for(int i=0;i<n-1;i++){
        insert=array[i+1];
        int num = i+1;
        int j;
        for( j=num-1; j>=0 && insert>array[j]; j-- ) //查找插入位置
        {        
            array[j+1]=array[j] ;           //  后移            
        }
        array[j+1]=insert;
        }
     
    for (int i=0;i<n;i++){
    cout << array[i] <<' ';
    }
	return 0;

}
