#include <iostream>
using namespace std;

void backtrack(int start, vector<int> &arr, int target, vector<int> &temp, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    for (int i = start; i < arr.size(); i++)
    {
        if (i > start && arr[i] == arr[i - 1])
            continue; // skip duplicates

        if (arr[i] > target)
            break; // pruning

        temp.push_back(arr[i]);
        backtrack(i + 1, arr, target - arr[i], temp, ans);
        temp.pop_back(); // backtrack
    }
}

int main()
{
    vector<int> arr = {1, 3, 2,3};
    int target = 8;
    vector<int> temp;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    backtrack(0, arr, target, temp, ans);
    
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}
