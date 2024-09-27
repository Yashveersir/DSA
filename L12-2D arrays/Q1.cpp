#include<iostream>
#include<vector>
using namespace std;


int main(){
   int n,m;
   cout<<"Enter the number of Rows you want :";
   cin>>n;
   cout<<"Enter the number of columns you want :";
   cin>>m;
   int arr[n][m];
   cout<<"Enter the elements :"<<endl;
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
        cout<<"Enter the row ="<<i<<"th & column ="<< j <<"th element :";
        cin>>arr[i][j];
    }
    }

    cout<<"Printing the matrix  :"<<endl;

    for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
        
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;

    }

    
    vector<int> v;
    
   for (int j = 0; j < m; j++)
   {
    if (j&1)
    {
        for (int i = n-1; i >= 0; i--)
    {
        v.push_back(arr[i][j]);
    }
    }
    else
    {
        for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i][j]);
    }
    }
    cout<<endl;
    }

    cout<<"Printing the Matrix in Style :"<<endl;
    for (int i = 0; i < n*m; i++)
    {
       cout<<v[i]<<' ';
    }
        
    
    


    
   

    return 0;
}