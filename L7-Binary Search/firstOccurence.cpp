#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key){
    int start= 0;
    int end= size-1;
    int result=-1;
    int mid = (start + (end-start)/2);
    while (start<=end)
    {
        if (arr[mid]==key){
            result = mid;
            end = mid-1;
            }
        else if(key > arr[mid]){
           start = mid+1;
        }
        else{
        end = mid-1;
        }
        mid = (start + (end-start)/2);
        
        
    }
    return result;
    


}
int lastOccurence(int arr[], int size, int key){
    int start= 0;
    int end= size-1;
    int result=-1;
    int mid = (start + (end-start)/2);
    while (start<=end)
    {
        if (arr[mid]==key){
            result = mid;
            start = mid+1;
            }
        else if(key > arr[mid]){
           start = mid+1;
        }
        else{
        end = mid-1;
        }
        mid = (start + (end-start)/2);
        
        
    }
    return result;
    


}
int main () {
    int odd[11]={2,2,2,3,3,5,5,5,5,9,9};
   // int even[8]={1,4,5,8,12,17,19,24};
    int indexf = firstOccurence(odd,11,2);
    cout<<"index of first Occurenece "<<indexf<<endl;
    int index = lastOccurence(odd,11,2);
    cout<<"index of last Occurenece "<<index;


}
