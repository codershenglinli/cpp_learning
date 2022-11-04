#include <iostream>
#include <cstring>
using namespace std;

int mystrstr(char a[],char b[]){
   for(int i=0;i<strlen(a);i++){
      bool flag = true;
      for(int j=0;j<strlen(b)&&(i+j<strlen(a));j++){
         if(a[i+j]!=b[j]){
            flag = false;
         }
      }
      if(flag) return i;
   }
   return -1;

}

int main() 
{
   char a[81], b[81];
   cin>>a;
   cin>>b;
   cout << mystrstr(a, b);
   return 0;
}
