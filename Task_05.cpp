#include<iostream>
using namespace std;
class calculator{
    public:
    float num1;
    float num2;
    char op;
    void function();
    void add();
    void subtract();
    void multiply();
    void divide();
};

    
    void calculator::add(){
    cout<<"Enter two number one by one: ";
    cin>>num1>>num2;
    cout<<"The sum of the numbers you entered is: "<<num1+num2<<endl;

    };
    
    void calculator::subtract(){
    cout<<"Enter two number one by one: ";
    cin>>num1>>num2;
    cout<<"The Subtraction of the numbers you entered is: "<<num1-num2<<endl;
    };
   
    void calculator::multiply(){
    cout<<"Enter two number one by one: ";
    cin>>num1>>num2;
    cout<<"The product of the numbers you entered is: "<<num1*num2<<endl;
    };
   
    void calculator::divide(){
    cout<<"Enter two number one by one: ";
    cin>>num1>>num2;
    cout<<"The modulus of the numbers you entered is: "<<num1/num2<<endl;
    };
int main(){
    char op;
    calculator result;
    cout<<"Enter an operator: ";
    cin>>op;
    switch(op){
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
    };
    return 0;
}