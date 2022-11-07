#include<iostream>
#include<algorithm>
using namespace std;

//你的代码
int swim(int arr[], int n){
    if(n==1) return arr[0];
    if(n==2) return arr[0]+arr[1];
    if(n==3) return arr[0]+arr[1]+arr[2];
    int t1 = 2*arr[1]+arr[0]+arr[n-1];
    int t2 = 2*arr[0]+arr[n-2]+arr[n-1];
        if (t1<t2)
        {
            return swim(arr,n-2)+t1;
        }else{
            return swim(arr,n-2)+t2;
        }
}
int main()
{
   	int n,p[1000],i;
    cin>>n;
    for(i=0;i<n;i++) cin>>p[i];
    sort(p,p+n);
    cout<<swim(p,n);
    return 0;
}
