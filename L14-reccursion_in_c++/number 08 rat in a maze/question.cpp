#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> mat){
    if(( x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && mat[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> mat, vector<vector<int>> visited, int n, int x, int y, vector<string>& ans,string path)
{
    if (x >= n-1 && y >= n-1)
    {
        ans.push_back(path);
        return;
    }
    visited[x][y] =1;
    //down
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,n,visited,mat)){
        path.push_back('D');
        solve(mat,visited,n,newx,newy,ans,path);
        path.pop_back();
    }
    //left
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,n,visited,mat)){
        path.push_back('L');
        solve(mat,visited,n,newx,newy,ans,path);
        path.pop_back();
    }
    //right
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,n,visited,mat)){
        path.push_back('R');
        solve(mat,visited,n,newx,newy,ans,path);
        path.pop_back();
    }
    //up
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,n,visited,mat)){
        path.push_back('U');
        solve(mat,visited,n,newx,newy,ans,path);
        path.pop_back();
    }

    visited[x][y] =0;
}

int main()
{
    vector<string> ans;
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {0, 1, 1, 1}
    };
    int n = mat.size();
    vector<vector<int>> visited(n, vector<int>(n, 0));
    int srcx = 0;
    int srcy = 0;

    if (mat[0][0] == 0) {
        cout << "No paths possible" << endl;
        return 0;
    }

    string path = "";
    solve(mat, visited, n, srcx, srcy, ans, path);

    cout << "Possible Paths are: " << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
