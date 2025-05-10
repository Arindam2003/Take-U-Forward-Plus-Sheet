#include<iostream>

using namespace std;

int main()
{
    vector<int> nums={6,4,4,2,2};
    int n=nums.size();

    //! Brute Force...
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(nums[i]>2*nums[j] && i<j)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<endl;
    return 0;
}