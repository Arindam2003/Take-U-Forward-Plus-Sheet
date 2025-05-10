#include <iostream>
#include <vector>

using namespace std;

//! Simple Math

//! With Hashing or Unorder
vector<int> repeat_miss(vector<int>&nums)
{
    unordered_map<int, int> mpp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (mpp[i] == 2)
            ans.push_back(i);
        else if (mpp[i] == 0)
            ans.push_back(i);
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> anss;
    anss=repeat_miss(nums);
    for(auto v:anss)
    {
        cout<<v<<endl;
    }
    return 0;
}