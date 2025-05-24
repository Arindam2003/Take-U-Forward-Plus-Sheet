#include<iostream>
using namespace std;

void sequence(int idx, vector<int> &arr,int n,int target, vector<int> temp, vector<vector<int>> &ans)
{
    if (target==0)
    {
        ans.push_back(temp);
    }
    if(target<0 || idx>=n)
    {
        return;
    }
    temp.push_back(arr[idx]);
    sequence(idx,arr,n,target-arr[idx],temp,ans);
    temp.pop_back();
    sequence(idx+1, arr, n, target, temp, ans);
}

int main()
{
    vector<int> arr={1,3,2};
    int target=8;
    vector<int> temp;
    vector<vector<int>> ans;
    sequence(0,arr,arr.size(),target,temp,ans);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());   
    for(auto x:ans)
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}


