#include<iostream>
using namespace std;

void power(vector<int>nums,vector<vector<int>>&ans,vector<int>list,int index,int n)
{
    if(index==n)
    {
        ans.push_back(list);
        return ;
    }
    power(nums,ans,list,index+1,n);
    list.push_back(nums[index]);
    power(nums, ans, list, index + 1, n);
    list.pop_back();
}

int main()
{
    vector<int>nums={1,2,3};
    vector<vector<int>> ans;
    vector<int>list;
    int n=nums.size();
    power(nums,ans,list,0,n);
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y;
        }
        cout<<endl;
    }
    cout<<endl;
}