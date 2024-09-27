#include<iostream>
using namespace std;

int findInterssection(int arr1[], int arr2[], int n1, int n2){
    
    for (int i = 0; i < n1; i++)
    {
        for(int j=0;j<n2;j++){
            if ((arr1[i]^arr2[j])==0)
            {
               cout <<arr1[i] << ' ';
               arr2[i]=INT8_MIN;
               break;
            }
            
        }

        
    }
    return 0;
    
}
int main(void){
    int n1[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    int n2[13]={1,4,7,9,11,13,16,19,20,21,23,25,27};
   cout<<"The element of the array which are common :"<<endl;
   findInterssection(n1,n2,13,13);

    
    
    
    
    
    
}