#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int peakValue(int arr[], int start, int end){
    int mid = (start + (end-start)/2);
    if (start>=end)
       return start;
    
    if (arr[0]<arr[mid+1])
       {
        return peakValue(arr,mid+1,end);
       }
       else
       {
        return peakValue(arr,start,mid);
       }
 }
    
int main(){
    int odd[5]={1,99,100,99,35};
   int even[16]={24,69,100,1000,1002,-1,1,9,10,11,14,19,20,21,22,23};

    int index = peakValue(even,0,15);
    cout<<"index of Peak Value is "<<index<<endl;
    
}