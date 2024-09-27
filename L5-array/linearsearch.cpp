#include<iostream>
using namespace std;
 bool search (int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
           return 1;
        }
     
        
    }
       return 0;
    
  }
  void printArray(int arr[], int size){
       cout<< "array of numbers :";
       for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<',';
    }
  }
int main(void){
    int n[10]={12,21,12,14,3,2,7,43,98,90};
    int key;
    cout<<"Enter the key to search: ";
    cin>> key;
    bool found= search(n,10,key);
    if (found==1)
    {
        cout<<"Key is present"<<endl;
    }
    else
    cout<<"key is absent";
    printArray(n,10);
    
}