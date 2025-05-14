#include<iostream>
using namespace std;

//! optimal

vector<int> two_sum(vector<int> nums,int target)
{
    int n=nums.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++ )
    {
        mpp[nums[i]]=i;
    }
  
    for(int i=0;i<n;i++)
    {
        int need=target-nums[i];
        if(mpp.find(need)!=mpp.end())
        {
            return {mpp[need],i};
        }
    }
    return {-1,-1};
}

int main(){
    vector<int> nums = {1,  2, 10,6, 3};
    int n=nums.size();
    int target=7;
    vector<int>ans;
    ans=two_sum(nums,target);
    //! Brute force
    // for(int i=0;i<n;i++)
    // {
    //     for(int  j=i+1;j<n;j++)
    //     {
    //         if(nums[i]+nums[j]==target)
    //         {
    //             ans.push_back(i);
    //             ans.push_back(j);
    //         }
    //     }
    // }
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}