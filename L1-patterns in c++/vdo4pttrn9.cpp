#include<iostream>
using namespace std;
int main(void){
    int m;
    char c=97;
    cout<<"Enter the number of rows:";
    cin>>m;
     int n=1;
 for (int i = 0; i < m; i++)
 {
   
    for (int j = 0; j <= m; j++)
    {
       c=97+i+j;
       cout<< c <<" ";
      
    }
   cout<<endl;
   
    
 }
}