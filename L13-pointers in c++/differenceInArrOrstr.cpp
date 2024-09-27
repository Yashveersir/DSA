#include<iostream>
using namespace std;
int main(void){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;
    unsigned int  i=1;
    cout<<arr<<endl;

    char ch[7]="abcde";
    ch[5]='o';
    cout<<ch<<endl;
    char *str=&ch[0];
    cout<<str<<endl;
    // what if null character is not present :
    char alpha='a';
    char *a=&alpha;
    cout<<a;

return 0;
}