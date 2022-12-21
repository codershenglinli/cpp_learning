#include "class.h"
#include <iostream>
using namespace std;
int Calculator::evaluate(const char* expr){
    int ans = 0;
    for(int i=1;expr[i]!='\0';++i){
        ans = ans*10+expr[i]-'0';
    }
    if(expr[0]=='-'){
        return -ans;
    }
    return ans;
}

Calculator::Calculator(const char* expr){
    self_expression = new char[10];
    total_expression = new char[100];
    strcpy(self_expression,expr);
    strcpy(total_expression,expr);
    value = evaluate(expr);
}

Calculator::~Calculator(){
    delete []self_expression;
    delete []total_expression;
}

Calculator &Calculator::combine(const Calculator & sa){
    total_expression = strcat(total_expression,sa.total_expression);
    value = value + sa.value;
    return *this;
}

void Calculator::print_value() const{
    cout << "value is " << value << endl;
}

void Calculator::print_total_expression() const{
    cout << total_expression << endl;
}

void Calculator::print_self_expression() const{
    cout << self_expression << endl;
}