#include "calculator.h"

double Calculator::Calculate(double x, char oper, double y){
    double result = 0.0;

    switch (oper)
    {
        case '+':
            result = Sum(x, y);
            break;
        case '-':
            result = Substract(x, y);
            break;
        case '*':
            result = Multiply(x, y);
            break;
        case '/':
            result = Divide(x, y);
            break;
        default:
            break;
    }

    return result;
}
 
double Calculator::Sum(double x, double y){
    return x + y;
}

double Calculator::Substract(double x, double y){
    return x - y;
}

double Calculator::Multiply(double x, double y){
    return x * y;
}

double Calculator::Divide(double x, double y){
    return x / y;
}