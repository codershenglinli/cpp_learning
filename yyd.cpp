#include <iomanip>
#include <iostream>
using namespace std;
int main(){
float c,f;
cin>>f;
c=(5/9.0)*(f-32.0);
cout<<setiosflags(ios::fixed)<<setprecision(1);
cout<<c<<endl;
return 0;
}