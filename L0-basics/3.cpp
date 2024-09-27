#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Inter the value to evaluate:";
    cin>> ch ;
    switch (ch)
    {
    case (ch>=0 || ch<=9):
        cout<<"the input character is numeric";
        break;
    case (ch>='a' || ch<='z'):
        cout<<"the input character is lowercase";
        break;
    case (ch>='A' || ch<='Z'):
        cout<<"the input character is uppercase";
        break;
    
    default:
       cout<<"wrong input";
        break;
    }
    // if('A'<=ch ||ch<='Z' )
    // {
    //     cout<<"Input value is Uppercase";
    // }
    // else if('a'<=ch ||ch<='z' )
    // {
    //     cout<<"Input value is Lowerercase";
    // }
    // else if('0'<=ch ||ch <='9' )
    // {
    //     cout<<"Input value is Numeric";
    // }
    
}