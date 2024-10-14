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
    //static allocation
    Hero a;
    a.setHealth(50);
    a.setLevel('B');
    cout<<"Level is "<<a.getlevel()<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;
    // dynamic allocation
    Hero *b = new Hero;
    (*b).setHealth(70);
    //or
    b->setLevel('A');
    //we use dereferenssing operator or arrow operator to accessing pointer type datatype
    cout<<"Level is "<<b->getlevel()<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;


}