#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    cout<<"capacity of v->" <<v.capacity()<<endl;
    // adding elemenet at the last of the vector if in case of vector if full the new voctor of double capacity is  generated 
    // and previous one is flushed out 
    v.push_back(1);
    cout<<"capacity of v->" <<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity of v->" <<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity of v->" <<v.capacity()<<endl;
    cout<<"size of v->"<<v.size()<<endl;

    cout<<"element at 2nd index ->"<<v.at(2)<<endl;

    cout<<"element at 1st index ->"<<v.front()<<endl;

    cout<<"element at last index ->"<<v.back()<<endl;

   cout<<"before pop"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
//    delete the last element of the vector
    v.pop_back();

       cout<<"After pop"<<endl;
   for(int i:v){
    cout<<i<<" ";
   }cout<<endl;
// clearing all the element of the vector
cout<<"before clear size->"<<v.size()<<endl;
cout<<"before clear capacity->"<<v.capacity()<<endl;

v.clear();

cout<<"After clear size->"<<v.size()<<endl;
cout<<"After clear capacity->"<<v.capacity()<<endl;

// to initialize  the vector which any value with a known size
vector<int> a(5,1);

// To copy all the element to a another vector 
vector<int> last(a);

}

            
