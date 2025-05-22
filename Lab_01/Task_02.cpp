#include<iostream>
#include "rectangle.h"
using namespace std;

int main(){
    rectangle result;                   //Object for the class rectangle
    result.set_dimension();             //calling function 
    result.area();                         //calling area function
    result.perimeter();                 //calling perimeter function
    return 0;
}