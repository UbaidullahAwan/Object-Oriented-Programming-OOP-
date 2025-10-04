#include<iostream>
using namespace std;
class Person{
    public:
    void showIdentity(){
        cout<<"I am a person"<<endl;
    }
};
class Teacher: virtual public Person{
    public:
    void teach(){
        cout<<"Teaching students"<<endl;
    }
};
class student :virtual public Person{
    public:
    void study(){
        cout<<"Studying courses"<<endl;
    }
};
class TeachingAssistant: public Teacher, public student{
    public:
    void assist(){
        cout<<"Assisting in the labs and grading"<<endl;
    }
};
int main(){
    TeachingAssistant ta;
    ta.showIdentity();
    ta.teach();
    ta.study();
    ta.assist();
    return 0;
}