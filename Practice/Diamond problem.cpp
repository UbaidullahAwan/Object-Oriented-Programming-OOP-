#include<iostream>
using namespace std;
class Lamborghini{
    void modelx(){
        cout<<"2015"<<endl;
    }
};
class Ferrari: virtual public Lamborghini{
    void modely(){
        cout<<"2010"<<endl;
    }
};
class Tesla: virtual public Lamborghini{
    void modelz(){
        cout<<"2018"<<endl;
    }
};
class cars: public Lamborghini, public Ferrari, public Tesla{
    void text(){
        cout<<"All cars are fantastic and luxurious"<<endl;
    }

};
int main(){
    cars mycar;
    mycar.modelx();
    mycar.modely();
    mycar.modelz();
    return 0;
}