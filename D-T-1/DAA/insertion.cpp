#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
// Insertion Sort
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size();
        // Traverse through the array
        for (int i = 0; i <= n - 1; i++) {
            int j = i;
            // Swap elements till we reach a greater element
            while (j > 0 && nums[j - 1] > nums[j]) {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }
        return nums;
    }
};

int main() {
    // Create an instance of solution class
    Solution solution;
    
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
