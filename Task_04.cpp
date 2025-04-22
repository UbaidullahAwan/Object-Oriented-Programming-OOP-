#include<iostream>
using namespace std;
class temperature{
    public:
    double celsius_temp,convert,result;
    void temp_converter();
    void Fahrenheit();
};

void temperature::temp_converter(){
    cout<<"Enter the temperature in Celsius: "<<endl;
    cin>>celsius_temp;
    convert=(celsius_temp*9)/5;
    result=convert+32;
    cout<<"The temperature in Fahrenhiet is: "<<result<<endl;
};

int main(){
    temperature fah;
    fah.temp_converter();
    return 0;
}