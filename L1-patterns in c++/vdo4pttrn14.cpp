#include<iostream>
using namespace std;
int main(void){
    int m;
   
    cout<<"Enter the number of rows:";
    cin>>m;
    
 for (int i = 0; i < m; i++)
 {
    int n=0;
    for(int j=0;j<=2*m-1;j++){
    if(j>=m-(i-1) && j<=m){
     cout<<++n;
    }
    else if(j>m &&j<=m+(i-1)){
        cout<<--n;
    }
    else
    cout<<' ';
    }
     
      cout<<'\n';
     }
    
 }
