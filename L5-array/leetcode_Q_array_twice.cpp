#include<iostream>
using namespace std;

int findIftwice(int arr[],int n){
    
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            if ((arr[i]^arr[j])==0)
            {
               cout <<arr[i] << ' ';
            }
            
        }

        
    }
    return 0;
    
}
int main(void){
    int n[13]={16,1,16,2,3,4,5,6,7,8,2,4,7};
   cout<<"The element of the array which are twice:"<<endl;
   findIftwice(n,13);

    
    
    
    
    
    
}