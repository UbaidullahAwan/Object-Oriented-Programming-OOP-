#include<iostream>
#include<string>
using namespace std;

class player{
    string name;
    public:
    player(string n){
        name=n;
    }                                       // Aggregation Relationship

void play(){
    cout<<name <<" is playing"<<endl;
}
~player(){
    cout<<name<<" is leaving the field";
}
};
class team{
    player *Player;
    public:
    team(player* p){
        player = p;
    }
    void startMatch(){
        cout<<"Match Started"<<endl;
        player->Polay();
    }
};
int main(){
    player* p1 = new player("Ubaid");
    {
        team t1(p1);
        t1.startMatch();
    }
    p1->play();
    delete p1;
    return 0;
}