//calculate e^x
#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    double item=1;
    int n=0;
    double ex=0;
    while (item>1e-6){
        ex+=item;
        n++;
        item=item*x/n;
    }
    cout << "e^" << x << " = " << ex << endl;
    return 0;
}