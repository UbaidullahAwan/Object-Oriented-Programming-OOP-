#include<iostream>
#include "calculator.h"
using namespace std;

int main() {
    char op;
    calculator result;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
    switch(op) {
        case '+':
            result.add();
            break;
        case '-':
            result.subtract();
            break;
        case '*':
            result.multiply();
            break;
        case '/':
            result.divide();
            break;
        default:
            cout << "Invalid operator entered!" << endl;
            break;
    };
    return 0;
}