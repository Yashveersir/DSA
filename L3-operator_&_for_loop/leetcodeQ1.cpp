 #include<iostream>
 using namespace std;
 int pow(int a,int b){
    int result=1;
    while (b)
    {
        result=result*10;
        b--;
    }
    return result;
    
 }
 int main(){
    int a,b,n,sum=0,prod=1,cnt=0;
    cout<<"Enter the value of n:";
    cin>>n;
    a=n;
    while (a)
    {
        a/=10;
        cnt++;
    }
    cout<<"The number of digits are "<<cnt<<endl;
    cout<<"Sum of the digits = ";
    a=n;
    while(a){
        b=a%10;
        cout<<b;
        if(a>10)
        cout<<'+';
        sum+=b;
        a/=10;
         }
      cout<<" = "<<sum<<endl;
      cout<<"Product of the digits = ";
      a=n;
     
       while(a){
        
        b=a%10;
        cout<<b;
        if(a>10)
        cout<<'*';
        prod*=b;
        a/=10;
        

      }
      cout<<" = "<<prod<<endl;
      cout<<"The Difference of Product and Sum of the digits of the Number = "<<prod-sum;


      
      
    }

 
 