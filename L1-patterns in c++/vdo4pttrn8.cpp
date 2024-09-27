#include<iostream>
using namespace std;
int main(void){
     char n=0;
     int row;
     cout<<"Enter the number of rows:";
     cin>>row;
 for (int i = 0; i < row; i++)
 {
    for (int j = 0; j < row; j++)
    {
       if(i==0 ||j==0)
       n= 97+i+j;
       else if(i,j>0 && j<=i){

       }
       else
       n++;
       

       
       cout<<n;
       cout<<" ";
     
    }
   cout<<endl;

    
    
 }
}
