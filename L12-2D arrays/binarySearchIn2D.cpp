#include<iostream>
#include<array>
using namespace std;

int main(){

    int arr[10][10];
    int m,n;
    cout<<"Enter the number of Rows :"<<endl;
    cin>>m;
    cout<<"Enter the number of column :"<<endl;
    cin>>n;

    cout<<"Enter The Elements One by One :"<<endl;
    for(int i=0; i<m;i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout<<" Row = "<<i+1<<"th & Column = "<< j+1 <<"th element :";
           cin>>arr[i][j]; 
        }
        
    }
    cout<<"~~~~~~~~~~| Matrix input completed |~~~~~~~~~";


    return 0;


}