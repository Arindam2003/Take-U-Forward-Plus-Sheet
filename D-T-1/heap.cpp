#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to recursively heapify the array downwards
    void heapifyDown(vector<int> &arr, int last, int ind) {
        // Index of largest element
        int largestInd = ind; 

        // Indices of the left and right children
        int leftChildInd = 2*ind + 1, rightChildInd = 2*ind + 2;
        
        // If the left child holds larger value, update the largest index
        if(leftChildInd <= last && arr[leftChildInd] > arr[largestInd]) 
            largestInd = leftChildInd;

        // If the right child holds larger value, update the largest index
        if(rightChildInd <= last && arr[rightChildInd] > arr[largestInd]) 
            largestInd = rightChildInd;

        // If the largest element index is updated
        if(largestInd != ind) {
            // Swap the largest element with the current index
            swap(arr[largestInd] , arr[ind]);

            // Recursively heapify the lower subtree
            heapifyDown(arr, last, largestInd);
        }
        return; 
    }

    // Function to build Max-heap from the given array
    void buildMaxHeap(vector<int> &nums) {
        int n = nums.size();
        
        // Iterate backwards on the non-leaf nodes
        for(int i = n/2 - 1; i >= 0; i--) {
            // Heapify each node downwards
            heapifyDown(nums, n-1, i);
        }
        return;
    }

public:
    // Function to sort the array using heap-sort
    void heapSort(vector<int> &nums) {
        
        // Function call to build a max-heap from the given array
        buildMaxHeap(nums);
        
        // To store the last Index
        int last = nums.size() - 1; 
        
        // Until there are elements left to sort in the array
        while(last > 0) {
            // Swap the greatest element to the current last index
            swap(nums[0], nums[last]);
            last--; // Decrement the last index
            
            if(last > 0) {
                // Heapify down the root
                heapifyDown(nums, last, 0);
            }
        }
        
        return;
    }
};

// Driver code
int main() {
    vector<int> nums = {60, 30, 40, 20, 10, 50};
    
    cout << "Input Array: ";
    for(int x : nums) cout << x << " ";
    
    // Creating an object of Solution class
    Solution sol;
    
    // Function call to sort the array using heap-sort
    sol.heapSort(nums);
    
    cout << "\nSorted Array: ";
    for(int x : nums) cout << x << " ";
    
    return 0;
}
