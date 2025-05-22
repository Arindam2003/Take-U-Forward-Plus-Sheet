#include<iostream>
using namespace std;

void reverse(vector<int> &nums,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    swap(nums[left],nums[right]);
    reverse(nums,left+1,right-1);
}

int main()
{
    vector<int>arr={1,2,3,4,5,6};
    int n=arr.size();
    reverse(arr,0,n-1);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}