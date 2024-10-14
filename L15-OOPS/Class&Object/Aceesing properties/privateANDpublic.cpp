#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    char level;

    public:
    //getter
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    //setter
    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }
};

int main(){
    Hero yash;
    yash.setHealth(70);
    yash.setLevel('A');

    cout<<"Yash health is "<<yash.getHealth()<<endl;
    cout<<"Yash level is "<<yash.getlevel()<<endl;
    return 0;
}