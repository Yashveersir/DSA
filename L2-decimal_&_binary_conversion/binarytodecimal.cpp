#include<iostream>
#include<math.h>
using namespace std;
//  int pow(int a,int b){
//     int result=1;
//     while (b!=0)
//     {
//         result=result*a;
//         b--;
//     }
//     return result;
    
//  }

int main(){
    int n;
    cout<<"Enter the Binary Number to change in Decimal Number:";
    cin>>n;
    int m,cnt=0,dec=0,rem;
    m=n;
    while (m){
        rem=m%10;
   
        dec=(rem*pow(2,cnt++))+dec;
        m=m/10;
        }
    cout<<"answer is :"<<dec;
    
    


}