/*
#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    void setDimension();
    void area();
    void perimeter();
};
void Rectangle::setDimension(){
    cout<<"Enter the value of length: "<<length<<endl;
    cin>>length;
    cout<<"Enter the value of widht: "<<width<<endl;
    cin>>width;

};
void Rectangle::area(){
    length*width;
};
void Rectangle::perimeter(){
    2(length*width);
};
int main(){
    Rectangle r1;
    r1.setDimension();
    r1.area();
    r1.perimeter();
    return 0;
}
*/

//-------------------------------------------------Program 02---------------------------------------------------//
/*
#include<iostream>
using namespace std;
class Voter{
    public:
    string name;
    int age;
    void isEligible();
};
void Voter::isEligible(){
    cout<<"Enter your name: "; cin>>name;
    cout<<"Enter your age: ";  cin>>age;
    if(age>18){
        cout<<"Congrats!! Your are eligble to cast vote."<<endl;
    }else{
        cout<<"Your don't the age criteria to cast vote. "<<endl;
    }
};
int main(){
    Voter v1;
    v1.isEligible();
    return 0;
}
*/
//------------------------------------------------------Program 03----------------------------------------------------------//
/*
#include<iostream>
using namespace std;
class Temperature{
    public:
    int temp_in_celsius;
    double convert;
    void temp_convert();
};
void Temperature::temp_convert(){
    cout<<"Enter your temperature in celsius: "<<endl;
    cin>>temp_in_celsius;
    convert=(temp_in_celsius*9)/5+32;
    cout<<"Your temperature in Fahrenheit is: "<<convert<<endl;

};
int main(){
    Temperature t1;
    t1.temp_convert();
    return 0;
}
*/
//---------------------------------------------------Program 4----------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
class Calculator{
    public:
    float num1;
    float num2;
    void add();
    void subtract();
    void multiply();
    void divide();
};
void Calculator::add(){
    cout<<"Enter two number one by one"<<endl;
    cin>>num1>>num2;
    num1+num2;
};
int main(){
       char op;
    Calculator c1;
    switch (op){
        cout<<"Choose the arithematic operation your want to perform"<<endl;
        cin>>op;

        case '+':
        c1.add();
        return 0;
    }
};
*/
/*
#include<iostream>
using namespace std;
class Product{
    private:
    string name;
    double price;
    int quantity;
    public:
    void setName();
    void setPrice();
    void setQuantity();
};
void Product::setName(string n){
    if(!n.empty()){
        name=n;
    }else{
        cout<<"Please enter your name in valid format."<<endl;
    }
};
void Product::setPrice(double p){
    if(p >0){
        price=p;
    }else{
        cout<<"Please enter valued price"<<endl;
    }

};
void Product::setQuantity(int q){
    if(q>0){
        q=quantity;
    }else{
        cout<<"Please enter valid quantity"<<endl;
    }
};
int main(){
    Product p1;
    p1.setName("");
    p1.setPrice(-50);
    p1.setQuantity(-2);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;

    public:
    Student(){
        name="Ubaid";
        age=20;
    }
    Student(string n, int a){
        name=n;
        age=a;
    }
    void display_results(){
    cout<<"Name:"<<name<<"Age: "<<age<<endl;
    }
};
int main(){
    Student s1;
    Student s2("Ubaidullah_Awan", 19);
    s1.display_results();
    s2.display_results();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Employee{
    private:
    int id;
    string name;
    float salary;
    public:
    Employee(){
        id=0;
        name="Ubaidullah_Awan";
        salary=420000;
    }

    void display_data(){
        cout<<"Employee name: "<<name<<" Empolyee's id: "<<id<<"  Employee's salary: "<<salary<<endl;
    }
};
int main(){
    Employee e1;
    e1.display_data();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class BankAccount{
    private:
    float accountNumber;
    string accountHolder;
    double balance;
    public:
    BankAccount(int an, string ah, double b){
        accountNumber=an;
        accountHolder=ah;
        balance=b;
    }

    void display_details(){
        cout<<"AccountNumber: "<<accountNumber<<" AccountHolder"<<accountHolder<<" Balance: "<<balance<<endl;
    }
};
int main(){
BankAccount ba(320637373, "Ubaidullah_Awan", 5000);
ba.display_details();
return 0;
}
*/
/*
#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float width;
    
    public:

    Rectangle(){
        length=1.0;
        width=1.0;

    }
    Rectangle(float l, float w){
        length=l;
        width=w;
    }
    Rectangle(float a){
        length=a; width=a;
    }
    void area(){
        length*width;
    }
    void display_results(){
        cout<<"The area of a rectangle is: "<<length*width<<endl;
    }

};
int main(){
    Rectangle r1;
    Rectangle r2(20.0,30.0);
    Rectangle r3(2.0);
    r2.display_results();
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class  MyArray{
    private:
    int *data;
    public:
    MyArray(int size){
        data= new int[size];                            //DAM has been to done to "data pointer"
        cout<<"Array of size"<<size<<"Created"<<endl;
    }
    ~MyArray(){
        delete[] data;
        cout<<"Array destroyed and memory released"<<endl;
    }
};
*/

#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
public:
    void setPerson(){
        name="Ubaidullah_Awan";
        age=20;
    }
    void showPerson(){
        cout<<"Name: "<<name<<"Age: "<<age<<endl;
    }

};
class Student: public Person{
    public:
    int rollNo;
    void setStudent(){
        setPerson();
        rollNo=17;
    }
     void showStudent(){
         cout<<name<<age<<"Rollno: "<<rollNo<<endl;
    }
};
int main(){
    Student s1;
    s1.showPerson();
    s1.showStudent();
    return 0;
}




