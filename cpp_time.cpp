#include<iostream>
#include <time.h>
using namespace std;

int main(){
    time_t ok;
    time(&ok);
    printf("%s",ctime(&ok));
    return 0;
}