#include<iostream>  
using namespace std; 

int f(int n){
    int *array = new int[n+1];
    array[0] = 1;
    //array[1] = 1;
    for(int i=1;i<=n;i++){
        array[i]=i*array[i-1];
    }
    return array[n];

}
int main(){
	int n,m;
    cin>>n>>m;
    if(n<m) cout<<"wrong";
    else cout<<f(n)/f(m)/f(n-m);
    return 0;
}