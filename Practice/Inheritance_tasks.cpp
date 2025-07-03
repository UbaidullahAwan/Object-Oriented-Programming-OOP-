/*
#include<iostream>
using namespace std;
class Person{
    private:
    string name="Ubaidullah_Awan";
    int age=19;

    public:
    void display_person_info(){
        cout<<"The name  of the student is: "<<name<<endl;
        cout<<"The age of the student is: "<<age<<endl;

    }

};
class student: public Person{
    public:
    int student_id=17;
    void display_student_info(){
        cout<<"An id of the student is: "<<student_id<<endl;
    }
};

int main(){
    student s1;
    s1.display_person_info();
    s1.display_student_info();
    return 0;
}
*/
//------------------------------------------------------------------Task 02--------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
class Person{
    private:
    string name="Ubaid";
    int age=19;
    public:
    void display_person(){
        cout<<"The name of the employee is:"<<name<<endl;
        cout<<"The age of the employee is: "<<age<<endl;
    }
};
class Employee:   public Person{
    private:
    int id=17;
    public:
    void display_employee(){
        cout<<"An id of the employee is:"<<id<<endl;
    }

};
class Manager: public Employee  {
    private:
    string department="Services and General Administration";
    public:
    void display_manager(){
        cout<<"The department of the employee is: "<<department<<endl;
    }
};
int main(){
    Manager m1;
    m1.display_person();
    m1.display_employee();
    m1.display_manager();
    return 0;
}
*/
//-----------------------------------------------------Task_03--------------------------------------------------------------//
/*#include<iostream>
using namespace std;
class Employee{
    private:
    string name="Ali";
    int salary=20000;
    public:
    void display_employee(){
        cout<<"The name of the employee is: "<<name<<endl;
        cout<<"The salary of the employee is: "<<salary<<endl;
    }
    
};

class Developer: public Employee{
    private:
    string programming_langugage="Javascript and Python";
    public: 
    void display_developer(){
        cout<<"The programming langugage developer employs to develop softwraes are: "<<programming_langugage<<endl;
    }

};
class Designer: public Employee{
    private:
        string design_tool="Photoshop and Figma (for UI & UX)";
    public:
    void display_design(){
        cout<<"The tool which desinger employs is: "<<design_tool<<endl;
    }

};
int main(){
     Employee e1;
     Developer d1;
     Designer d2;

     e1.display_employee();
     d1.display_developer();
     d2.display_design();
     return 0;

}
*/
//-------------------------------------------------------Task 04------------------------------------------------------------------------//
#include<iostream>
using namespace std;
class Printer{                      //Class
    public:                         //Access Specifier
    void print_document(){
        cout<<"The is a printer"<<endl;
    }
};
class Scanner: virtual public Printer{
    public:
    void scan_document(){
        cout<<"This is a Scanner"<<endl;
    }
};
class Photocopier: virtual Printer, public Scanner{
    public:
    void photocopy(){
        scan_document();
        print_document();
 }
};
int main(){
    Photocopier p1;
    p1.photocopy();
    return 0;
}