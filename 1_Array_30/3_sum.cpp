#include <iostream>
using namespace std;

vector<vector<int>> three_sum(vector<int> nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i - 1] && i > 0)
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j <= k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                // Found a triplet that sums up to target
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);

                // Skip duplicates
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 10, 6, 3};
    int n = nums.size();
}