#include<iostream>
using namespace std;
 void printArray(int arr[], int size){
       cout<< "array of numbers :";
       for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<',';
    }
  }
  void reverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
    
  }
int main(void){
    int n[10]={12,21,12,14,3,2,7,43,98,90};
    cout<<"array initially:";
    printArray(n,10);
   reverseArray(n,10);
   cout<<endl<<"array after swapping:";
    printArray(n,10);
    
}