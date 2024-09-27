#include<iostream>
// #include<math.h>
using namespace std;
 int pow(int a,int b){
    int result=1;
    while (b!=0)
    {
        result=result*10;
        b--;
    }
    return result;
    
 }

int main(){
    int n;
    cout<<"Enter the n Number to change in Binary Number:";
    cin>>n;
    int ans=0;
    int i=0;
    while (n !=0)
    {
       int bit = n & 1;
       cout<<bit<<endl;
       
        ans=(bit * pow(10, i++) )+ ans;
        n = n >> 1;
       
    }
    cout<<"Answer is "<<ans;
    


}