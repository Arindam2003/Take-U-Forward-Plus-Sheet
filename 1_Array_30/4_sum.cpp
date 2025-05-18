#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector <int> nums = { 1, -2, 3, 5, 7, 9 };
    int target = 7;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++)
        {
            if(nums[j]==nums[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while (k<l)
            {
                long long total=nums[i]+nums[j]+nums[k]+nums[l];
                if(total==target)
                {
                    vector<int> temp = { nums[i], nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                }
                else if(total>target)
                {
                    l--;
                }
                else{
                    k++;
                }
            }
        }
    }
}