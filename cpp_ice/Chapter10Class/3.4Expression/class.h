#ifndef CLASS_H
#define CLASS_H

#include<iostream>
#include<cstring>

struct Calculator
{
private:
    char* self_expression;
    char* total_expression;
    int value;
    int evaluate(const char* expr);
public:
    Calculator(const char* expr);
    ~Calculator();
    // combine函数将传入的Calculator总表达式添加到this->total_expression后面，并且更新this->value的值。并且返回当前Calculator本身。
    Calculator & combine(const Calculator & sa);
    // print_value函数打印value值。
    void print_value() const;
    // print_total_expression函数打印总表达式。
    void print_total_expression() const;
    // print_self_expression函数打印该Calculator自带的表达式。
    void print_self_expression() const;
};

#endif // CLASS_H