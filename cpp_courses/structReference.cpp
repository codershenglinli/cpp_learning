#include <iostream>
using namespace std;

struct studentT{

};

studentT &getStudentData(){
    studentT *student = new studentT;
    return *student;
}

int main(){
    studentT &s = getStudentData();    
    delete &s;
    return 0;
}