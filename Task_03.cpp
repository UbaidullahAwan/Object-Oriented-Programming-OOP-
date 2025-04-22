#include<iostream>
using namespace std;
class voter{
    public:
    string name;
    int age;
    void iseligible();
};

void voter::iseligible(){
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>0 && age<18){
        cout<<"A person having age greater than 18 is eligible to vote.You are not eligible to cast vote!!"<<endl;
    }
    if(age>=18){
        cout<<"Congrats!! You are eligible to cast vote."<<endl;
    }
};
int main(){
    voter inference;
    inference.iseligible();
    return 0;
}