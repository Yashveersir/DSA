#include<iostream>
#include<array>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the number of Rows :"<<endl;
    cin>>m;
    cout<<"Enter the number of column :"<<endl;
    cin>>n;

    int arr[10][10];
  
    cout<<"Enter The Elements One by One :"<<endl;
    for(int i=0; i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<"enter the number :";
           cin>>arr[i][j]; 
        }
        
    }
       
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j< n; j++)
        {
           sum+=arr[i][j]; 
        }
        cout<<"The sum of row "<<i+1<<" elements ="<<sum<<endl;
        
    }
    return 0;
    

}