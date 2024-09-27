#include<iostream>
using namespace std;
int main(void){
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        for (int n = 1; n <= m-i+1; n++)
        {
          cout<<n; 
        }
        for(int s=2;s<2*i;s++){
            cout<<'*';
        }
        for(int k= m-i+1;k>=1;k--){
            cout<<k;
        }

        cout<<'\n';
        
    }
}
    