#include<iostream>
using namespace std;

int main()
{
    vector<int> nums={1,2,2,2,3,4,5,6,100,101};
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int max_count = 1;
    int count = 0;
    int lastSmaller = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = nums[i];
        }
        else if (nums[i] != lastSmaller)
        {
            count = 1;
            lastSmaller = nums[i];
        }
        max_count = max(max_count, count);
    }
    cout<<max_count<<endl;
    return 0;
}