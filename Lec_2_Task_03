#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;

public:
rectangle(){                //Default constructor
    length=1.0;
    width=1.0;
}
rectangle(float ln, float wd){               //Parameterized constructor
length=ln;
width=wd;
}
rectangle(double area){                     //Single Parametered constructor 
    area=length*width;
}
void area(){
    cout<<"An area of rectangle is: "<<length*width<<endl;
} 
};
int main(){
    rectangle();
    rectangle r1(20,30);
    rectangle r2(90,30);
    r2.area();
    return 0;
}