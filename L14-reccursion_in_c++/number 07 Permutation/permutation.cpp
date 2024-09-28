#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // Backtracking
        swap(nums[index], nums[j]);
    }
}

int main()
{
    vector<int> nums;
    nums = {1, 2, 3};
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout<<",";
    }
    return 0;
}