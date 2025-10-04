#include<iostream>
using namespace std;
class Engine{
    string engineNumber;
    public:                                                 //Composition Relationship
    Engine(){
        engineNumber = "Unknown";
        cout<<"Default Engine created"<<endl;
    }
    void setEngineNumber(string number){
        engineNumber = number;
    }
    void start(){
        cout<<"Engine"<<"engineNumber"<<"start"<<endl;
    }
    ~Engine(){
        cout<<"Engine"<<engineNumber<< "vanished"<<endl;
    }
};
class car{
    Engine engine;
    public:
    car(string engineNum){
        engine.setEngineNumber(engineNum);
        cout<<"Car created with engine"<< engineNum<<endl;
    }
    void startcar(){
        engine.start();
        cout<<"Car is starting"<<endl;
    }
    ~car(){
        cout<<"Car destroyed"<<endl;
    }
};
int main(){
    car mycar("LOP-7876");
    mycar.startcar();
    return 0;
}

