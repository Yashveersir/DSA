#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,reversed_num=0;
    cout<<"Enter the number to reverse:";
    cin>>n;
   if((pow(2,-31)) < n && n < (pow(2,31)-1)){
    while (n)
    {
        int r=n%10;
        reversed_num= (10*reversed_num)+r;
        n/=10;

    }
     }
    else
    reversed_num=0;
    cout<< "the reversed number:"<<reversed_num;
    
}