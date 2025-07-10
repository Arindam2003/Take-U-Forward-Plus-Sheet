#include<iostream>
using namespace std;

vector<int> maxSubArray(vector<int> nums)
{
    int n = nums.size();
    int sum = 0;
    int maxSum = INT_MIN;
    int startIdx=-1;
    int endIdx=-1;
    int start;
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        if(sum==0)
        {
            start=i;
        }
        sum = sum + nums[i];
        if(maxSum<sum)
        {
            maxSum=sum;
            startIdx=start;
            endIdx=i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    for(int i=startIdx;i<=endIdx;i++)
    {
        temp.push_back(nums[i]);
    }
    return temp;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> x = maxSubArray(nums);
    for(auto num:x)
    {
        cout << num << endl;
    }
    return 0;
}