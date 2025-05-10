#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {3, 2, 1, 4, 5, 6};
    int k = 3;
    int n = nums.size();
    k = k % n;
    vector<int> temp;
    for (int i = 0; i < k; i++)
    {
        temp.push_back(nums[i]);
    }
    // cout << "temp-element" << endl;
    for (auto n : temp)
    {
        // cout << n << " ";
    }
    for (int i = k; i < n ; i++)
    {
        nums[i-k] = nums[i];
    }
    for(int i=0;i<k;i++)
    {
        nums[n-k+i]=temp[i];
    }
    
    for (auto n : nums)
    {
        cout << n << " ";
    }
    return 0;
}