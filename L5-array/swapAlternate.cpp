#include<iostream>
using namespace std;
 void printArray(int arr[], int size){
       cout<< endl << "array of numbers :";
       for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<',';
    }
  }
  void reverseArray(int arr[], int n){
    int start=0;
    int end=1;

    while (start<n-1 )
    {
       
        swap(arr[start],arr[end]);
        start+=2;
        end+=2;
        
    }
    
  }

  void reverseArraybyLovebabbar(int arr[], int n){
    

    for(int i=0;i+1<n;i+=2)
    {
      
        swap(arr[i],arr[i+1]);
        }
    }
int main(void){
    int n[16]={16,21,16,16,3,2,7,43,98,90,1,16,21,16,6,1};
    cout<<"array initially:";
    printArray(n,16);
   reverseArraybyLovebabbar(n,16);
   cout<<endl<<"array after swapping alternates:";
    printArray(n,16);
    
}