#include<iostream>
using namespace std;
class rectangle{                //Class 
    public:
    int length;             //attributes
    int width;
    int r1;
    void set_dimension();           //function declaration
    void area();                //Member functions
    void perimeter();
};

void rectangle::set_dimension(){                                        //Function definition
    cout<<"Enter length and width of the trangle: "<<endl;
    cin>>length>>width;
};
void rectangle::area(){                                         //function definition
    r1=length*width;
    cout<<"The area of the rectangle is :"<<r1<<endl;
};  
void rectangle::perimeter(){                                //function definition
    r1=2*(length+width);
    cout<<"The perimeter of a given rectangle is: "<<r1<<endl;
};
int main(){
    rectangle result;                   //Object for the class rectangle
    result.set_dimension();             //calling function 
    result.area();                         //calling area function
    result.perimeter();                 //calling perimeter function
    return 0;
}