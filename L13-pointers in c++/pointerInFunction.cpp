#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
    *p= *p + 1;
   
    
}

int main(void){
   int value=5;
   int *p=&value;
   cout<<"before update:";
   print(p);
   update(&value);
   cout<<"After  update:";
   print(p); 


return 0;
}