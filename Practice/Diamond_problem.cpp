#include<iostream>
using namespace std;
class Lamborghini{
    public:
    void modelx(){
        cout<<"2015"<<endl;
    }
};
class Ferrari: virtual public Lamborghini{
    public:
    void modely(){
        cout<<"2010"<<endl;
    }
};
class cars: virtual public Lamborghini, virtual public Ferrari{
    public:
    void text(){
        cout<<"All cars are fantastic and luxurious"<<endl;
    }

};
int main(){
    cars mycar;
    mycar.modelx();
    mycar.modely();
    return 0;
}