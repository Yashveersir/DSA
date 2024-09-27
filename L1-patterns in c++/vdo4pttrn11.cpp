/*#include<iostream>
using namespace std;
int main(void){
    int m;
   
    cout<<"Enter the number of rows:";
    cin>>m;
    
 for (int i = 0; i < m; i++)
 {
     for(int s=0;s<=m-i;s++){
     cout<<' ';
     }
     for(int j=0;j<=i;j++){
        cout<<'*';
     }
     cout<<'\n';
 }
}*/
#include<iostream>
using namespace std;
int main(void){
    int m;
   
    cout<<"Enter the number of rows:";
    cin>>m;
    
 for (int i = 0; i < m; i++)
 {
    for(int j=0;j<=m;j++){
    if(j>=m-i){
        cout<<"  *";
    }
    else
    cout<<"   ";
    }
     
      cout<<'\n';
     }
    
 }




