#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;

    public:
    void display_person_info{
        cout<<"The name  of the student is: "<<name<<endl;
        cout<<"The age of the student is: "<<age<<endl;

    }

};
class student: public Person{
    private:
    int student_id;
    public:
    void display_student_info{
        cout<<"An id of the student is: "student_id<<endl;
    }
};

int main(){
    student s1;
    s1.name="Ubaidullah_Awan";
    s1.age=19;
    s1.id=17;
    s1.display_person_info();
    s1.display_student_info();
    return 0;
}
