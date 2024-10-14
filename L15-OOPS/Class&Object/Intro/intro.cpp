#include<iostream>
//#include "Hero.cpp" // by using it we link class from outside
using namespace std;
class Hero {
    //properties
    int health;
    char level;
};

int main() {
    //creation of a object
    Hero h1;
    cout<<"Size of hero "<<sizeof(h1)<<endl;
    //if class is empty then size is 1

    return 0;
}