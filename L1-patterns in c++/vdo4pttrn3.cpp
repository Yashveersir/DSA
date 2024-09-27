#include<iostream>
using namespace std;
int main(void){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
     int n=1;
 for (int i = 0; i < m; i++)
 {
    for (int j = m; j >= 1; j--)
    {
       cout<< n++<<" ";
   
     
    }
   cout<<endl;
    
    
 }
}
