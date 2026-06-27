#pragma once
class Calculator {
    public:
        double Calculate(double x, char oper, double y);
    
    private:
        double Sum(double x, double y);
        double Substract(double x, double y);
        double Multiply(double x, double y);
        double Divide(double x, double y);
};