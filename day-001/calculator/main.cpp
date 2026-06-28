#include <iostream>
#include <string>
//#include <cctype>
#include "calculator.h"

using namespace std;

string StrToLower(string str);

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


    string expression = ""; 

    while(true) {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result: "<< result << endl << endl;


        //cin >> expression;
        //cout << StrToLower(expression) << endl;
        //if (tolower(expression) == "exit")
          //  break;
    }

    return 0;
}


// Utils

string StrToLower(string str) {
    string lower_str = "";
    
    for(auto x:str){
        lower_str += tolower(x);
    }

    return lower_str;
}
