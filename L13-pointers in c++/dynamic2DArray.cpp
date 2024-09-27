#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<"Enter the value of m:";
    cin>>m;

    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
         arr[i] = new int[m];
    }
    //  Creation Done of 2D Array in Dynamic (Heap) Memory!!!

    //  taking input:

   for (int i = 0; i < n; i++){
         for (int j = 0; j < m; j++){
        cout<<"Enter the element arr["<<i<<"]"<<"["<<j<<"]"<<" = ";
        cin>>arr[i][j];
         }
   }

    // taking output :

    for (int i = 0; i < n; i++){
         for (int j = 0; j < m; j++){
             cout<<"arr["<<i<<"]"<<"["<<j<<"]"<<" = "<<arr[i][j]<<endl;
        }
        cout<<endl;
    }
   
    // Releasing memory !!!
         
        for (int j = 0; j < n; j++){
             delete [] arr[j];
        }
        delete []arr;

        cout<<arr[1][1];

    




    return 0;
}