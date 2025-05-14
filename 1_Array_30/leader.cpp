#include<iostream>
#include<vector>
using namespace std;


//! Brute Force
// vector<int> leader(vector<int>nums)
// {
//     int n=nums.size();
//     vector<int> ans;
//     for(int i=0;i<n;i++)
//     {
//         int cnt=0;
//         for(int j=i+1;j<n;j++)
//         {
//             if(nums[i]<=nums[j])
//             {
//                 cnt++;
//                 break;
//             }
//         }
//         if(cnt==0)
//         {
//             ans.push_back(nums[i]);
//         }
//     }
//     return ans;
// }

//! Optimal...
vector<int>leader(vector<int> nums)
{
    int n=nums.size();
    vector<int>ans;
    if(nums.empty())
    {
        return ans;
    }
    ans.push_back(nums[n-1]);
    int last=nums[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(nums[i]>last)
        {
            ans.push_back(nums[i]);
            last=nums[i];
        }
    }  
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int> nums = { -3, 4, 5, 1, -4, -5 };
    vector<int>ans=leader(nums);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}