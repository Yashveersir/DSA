 #include<iostream>
 using namespace std;
 int hamming_weight(uint32_t n){
    int cnt=0,b;
    while (n!=0)
    {
        b=n%10;
        n/=10;
        if(b==1)
        cnt++;
      
    }
    return cnt;
    
 }
 int main(){
    uint32_t a;
    cout<<"Enter the value of binary:";
    cin>>a;
    int c=hamming_weight(a);
    cout<<c;

 }