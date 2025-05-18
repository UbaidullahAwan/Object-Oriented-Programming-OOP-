#include<iostream>
using namespace std;
class Employee{
    private:                //Access Specifier
    int id;
    string name;
    float salary;
    public:
    Employee(){                 //Default Constructor
        id=0;
        name="Not Assigned";           
        salary=0.0;
    }
    void display_details(){
        cout<<"Name: "<<name<<"Id: "<<id<<"Salary: "<<salary<<endl;
    }  
};
int main(){
    Employee e1;
    e1.display_details();
    return 0;
}