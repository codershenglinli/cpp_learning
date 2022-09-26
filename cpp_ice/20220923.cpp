#include<iostream>
#include<cstring>
#define N 100
using namespace std;

//选择排序
/*
int main(){
    int num;
    cin >> num;
    int array[100];
    for (int i=0;i<num;i++){
        cin >> array[i];
    }

for (int j=0;j<num-1;j++){
    int min_position=j;
    for (int i=j;i<num;i++){
        if (array[i]<array[min_position])
            min_position = i;
    }
    int temp = array[j];
    array[j]=array[min_position];
    array[min_position]=temp;

    for (int i=0;i<num;i++){
        cout << array[i] << ' ';
    }
    cout << endl;
}
    return 0;
}
*/

//插入排序
/*
int main(){
    int num;
    cin >> num;

    int array[N];
    for (int i=0;i<num;i++){
        cin >> array[i];
    }

    int insert;
    cin >> insert;


int j;
for( j=num-1; j>=0 && insert<array[j]; j-- ) //查找插入位置
{        
    array[j+1]=array[j] ;           //  后移            
}
array[j+1]=insert;  //  插入数据到正确位置




    for (int i=0;i<num+1;i++){
        cout << array[i] << ' ';
    }
    cout << endl;    

}

*/

/*
int main ()
{ 

    int n;
    cin >> n;

    int array[N];
    for (int i=0;i<n;i++){
        cin >> array[i];
    }
    int insert;
    for(int i=0;i<n-1;i++){
        insert=array[i+1];
        int num = i+1;
        int j;
        for( j=num-1; j>=0 && insert<array[j]; j-- ) //查找插入位置
        {        
            array[j+1]=array[j] ;           //  后移            
        }
        array[j+1]=insert;

        for (int i=0;i<n;i++){
            cout << array[i] <<' ';
        }
        cout <<endl;
    } 




	return 0;
}

*/

//字符逆置

int main(){
    char string[80];
    cin.getline(string,80);
    int len = strlen(string);
    int i=0,j=len-1;
    while (i<j){
        int temp = string[i];
        string[i] = string[j];
        string [j] = temp;
        i++;
        j--;
    }
    cout << string;

}

