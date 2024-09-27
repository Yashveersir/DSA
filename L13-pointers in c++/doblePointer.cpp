#include<iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}

void update(int **p){
    *p= *p + 1;
   
    
}

int main(void){
   int value=5;
   int *p=&value;
   int **p1=&p;
   cout<<"before update:";
   print(p);
   update(p1);
   cout<<"After  update:";
   print(p);
   cout<<endl<<"value ="<<value;


return 0;
}