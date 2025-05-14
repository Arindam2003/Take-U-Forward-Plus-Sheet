#include<iostream>

using namespace std;

vector<int> rearrange(vector<int> nums)
{
    int n=nums.size();
    int posi=0;
    int neg=1;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            ans[neg]=nums[i];
            neg=neg+2;
        }
        else{
            ans[posi]=nums[i];
            posi=posi+2;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-3, 4, 5, 1, -4, -5};
    vector<int> ans = rearrange(nums);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}