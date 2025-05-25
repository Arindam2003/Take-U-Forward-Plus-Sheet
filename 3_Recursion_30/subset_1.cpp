#include<iostream>
using namespace std;

void subset(int idx,int sum,vector<int>&arr,vector<int>&ans)
{
    if(idx==arr.size())
    {
        ans.push_back(sum);
        return ;
    }

    subset(idx+1,sum+arr[idx],arr,ans);
    subset(idx+1,sum,arr,ans);
}

int main()
{
    vector<int> arr={2,3,1,9,4,6};
    vector<int> ans;
    subset(0,0,arr,ans);
    for(auto x: ans)
    {
        cout<<x<<" ";
    }
}