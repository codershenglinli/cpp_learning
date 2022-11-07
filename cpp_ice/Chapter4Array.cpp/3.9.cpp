/*
搞不懂，算了！
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch[31]="";
    int total;
    for (total=0;cin>>ch[total];total++);
    char ans[30][30]={""};
    for (int j=0;(j+1)*n<total;j++){
        for (int i=0;i<n;i++){
            ans[j][i] = ch[n*j+i]; 
        }
    }
    for (int i=0;i<n;i++){
        for(int j=0;(j+1)*n<total;j++){
            if(ans[j][i]!='\0')
            cout << ans[j][i];
        }
    }
    return 0;
}