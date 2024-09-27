#include<iostream>
using namespace std;
int main(void){
     char n=0;
     int row;
     cout<<"Enter the number of rows:";
     cin>>row;
     char c=97+row-1;
 for (int i = 0; i < row; i++)
 {
    c=97+row-1-i;
    for (int j = 0; j <= i; j++)
    {
       cout<<c++;
       cout<<" ";
     
    }
   cout<<endl;
   

    
    
 }
}
