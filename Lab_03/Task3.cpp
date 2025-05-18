#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Method to set person details
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    // Method to display person details
    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;

public:
    // Method to set student details
    void setStudent(string n, int a, int r) {
        setPerson(n, a);  // Calling base class method to set name and age
        rollNo = r;
    }

    // Method to display student details
    void showStudent() {
        showPerson();  // Calling base class method to display name and age
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    // Create a Student object
    Student student;

    // Set student details
    student.setStudent("John Doe", 20, 101);

    // Display student details
    cout << "Student Details:" << endl;
    student.showStudent();

    return 0;
}