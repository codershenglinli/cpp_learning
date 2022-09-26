#include <iostream>
using  namespace std;
int main()
{
    int array[3];
    for (int i=0;i<3;i++){
        cin >> array[i];
    }
    for (int lh=0;lh<2;lh++){
        for (int rh=lh;rh<3;rh++)
            if (array[rh]<array[lh]){
                int temp =array[rh];
                array[rh]=array[lh];
                array[lh] = temp;
            }
    }

    if (array[0]+array[1]>array[2]) {cout << "yes"<<endl;    if (array[0]*array[0]+array[1]*array[1]==array[2]*array[2]){
        cout << "yes";
    }else{
        cout << "no";
    }
    }
    else cout << "no"<<endl;

}