#include<iostream>
#include<string>
using namespace std;
class student{          // Defining class having identifier "Student"
    public:             // Access Specifier
    string name;        // Attributes
    int roll_no;
    int marks;


    void getData(){                         //Function
        cout<<"Enter you name"<<endl;
        cin>>name;
        cout<<"Enter your roll_no"<<endl;
        cin>>roll_no;
        cout<<"Enter your marks"<<endl;
        cin>>marks;
    }

    void displayData(){                                 //Function
        cout<<"Student's Name: "<<name<<endl;
        cout<<"Student's Roll no: "<<roll_no<<endl;
        cout<<"Student's marks: "<<marks<<endl;

    }
};
int main(){
    
    student s1;                 // Object s1
    s1.getData();                // Function Calling
    s1.displayData();           // Function Calling
}