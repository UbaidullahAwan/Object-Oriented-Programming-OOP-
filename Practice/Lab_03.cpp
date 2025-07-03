/*
#include<iostream>
using namespace std;
class BankAccount{
    private:
    double *balance;

    BankAccount(){                                  //Constructor
    balance= new amount;
    }
}
*/

//----------------------------------------------------Program 03---------------------------------------------------------------------//

#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class student: public Person{                               // Inheritance
    public:
    int rollno;
    student(string name, int age, int rollno): Person(string name ,int rollno){
        cout<<"Inheritance has been done overhere"<<endl;
    }

    void display_details(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
    
};

int main{
    student s1;
    s1.name="Ubaidullah_Awan";
    s1.age=20;
    s1.rollno=17;
    s1.display_details();
    return 0;
}
