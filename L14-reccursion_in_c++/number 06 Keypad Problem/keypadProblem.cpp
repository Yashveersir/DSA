#include<iostream>
#include<vector>
#include<string>
using namespace std;
void mapping(string arr, string output, string map[], vector<string>& ans, int index ){
    if(index>=arr.size()){
        ans.push_back(output);
        return;
    }
    int num= arr[index]- '0';
    string mappedValue = map[num];
    for(int i=0;i<mappedValue.size();i++){
        output.push_back(mappedValue[i]);
        mapping(arr,output,map,ans,index+1);
        output.pop_back();
    }

}

int main(){
    string arr;
    arr={"36"};
    string output;
    vector<string> ans;
    string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    mapping(arr,output,map,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}