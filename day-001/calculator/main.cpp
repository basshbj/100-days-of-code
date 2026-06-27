#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    Calculator c;

    cout << "----------------" << endl;
    cout << "---CALCULATOR---" << endl;
    cout << "----------------" << endl << endl;

    cout << "Operation format* a+b | a-b | a*b | a/b" << endl;

    while(true) {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result: "<< result << endl << endl;
    }

    return 0;
}
