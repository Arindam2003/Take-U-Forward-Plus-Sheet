#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> nums={3,2,1,4,5,6};
    int k=4;
    int n=nums.size();
    int temp=nums[0];
    for(int i=0;i<n-1;i++)
    {
        nums[i]=nums[i+1];
    }
    nums[n-1]=temp;
    for(auto n:nums)
    {
        cout<<n<<" ";
    }
    return 0;
}