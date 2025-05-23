#include <iostream>
#include <vector>
using namespace std;

void sub_sequ(int i, vector<int> &temp, vector<int> &arr,int n, int s, int sum, vector<vector<int>> &result)
{
    if (i >= n)
    {
        if (s == sum)
        {
            result.push_back(temp);
            // found=true;
        }
        return;
    }

    temp.push_back(arr[i]);
    s += arr[i];
    sub_sequ(i + 1, temp, arr, n, s, sum, result);

    temp.pop_back();
    s -= arr[i];
    sub_sequ(i + 1, temp, arr, n, s, sum, result);
}


bool checkSubsequenceSum(vector<int> &nums, int k)
{
    // your code goes here
    vector<vector<int>> result;
    vector<int> temp;
    sub_sequ(0, temp, nums, nums.size(), 0, k, result);
    if (result.size() == 0)
        return false;
    else
        return true;
}
