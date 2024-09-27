#include<iostream>
using namespace std;
int main(void){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
     int n=1;
 for (int i = 0; i < m; i++)
 {
   
    for (int j = 0; j <= i; j++)
    {
       cout<< i+j+1 <<" ";
      
    }
   cout<<endl;
   
    
 }
}
