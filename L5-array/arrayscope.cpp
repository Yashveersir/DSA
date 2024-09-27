#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<< endl<<"inside the function"<<endl;
    // updating array's first element
    arr[0]=130;
// printing the array 
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<' '; /* code */
} cout<<endl;

cout<< "going back to the main function"<<endl;
}
int main (){
    int arr[3]={1,2,3};
    update(arr,3);
   // printing the array 
   cout<<endl<<"print the array in main function "<<endl;
   for (int i = 0; i < 3; i++)
   {
    cout<<arr[i]<<' ';

   }
   
}