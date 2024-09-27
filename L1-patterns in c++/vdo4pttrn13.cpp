#include<iostream>
using namespace std;
int main(void){
    int m;
   
    cout<<"Enter the number of rows:";
    cin>>m;
    
 for (int i = 0; i < m; i++)
 {
    int n=i+1;
    for(int j=0;j<m;j++){
    if(j<i){
        cout<<" ";
    }
    else
    cout<<n++;
    }
     
      cout<<'\n';
     }
    
 }