#include<iostream>
using namespace std;
int findUnique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
int main(void){
    int n[7]={6,1,16,6,1,16,18};
    int unique=findUnique(n,7);
    cout<<"The unique element is :"<<unique;
    int s=10^7;
    cout<< endl << s;
    
    
    
}