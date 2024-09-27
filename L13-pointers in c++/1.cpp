#include<iostream>
using namespace std;
int main(void){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;
    unsigned int  i=1;
    cout<<*(ptr+i);
}