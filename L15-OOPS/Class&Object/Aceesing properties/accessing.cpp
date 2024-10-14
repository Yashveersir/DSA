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
    //accessing properties


    /*
        Three type of access modifier 
        1. public
        2. private  by default it is public so we cannot access it in main funcion
                    For accessing it in main function we use getter of setter
        3. protected
    */ 

    return 0;
}