#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int part(vector<int> &arr,int low,int high)
    {
        int pivot=arr[low];
        int i=low;
        int j=high;
        while(i<j)
        {
            while(arr[i]<=pivot && i<high)
            {
                i++;
            }
            while(arr[j]>=pivot && j>low)
            {
                j--;
            }
            if(i<j)
            {
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[low],arr[j]);
        return j;
    }
    void qS(vector <int> &arr,int low,int high)
    {
        if(low<high)
        {
            int p_index=part(arr,low,high);
            qS(arr,low,p_index-1);
            qS(arr,p_index+1,high);
        }
    }
    vector<int> quickSort(vector<int>& nums) {
        int n=nums.size();
        qS(nums,0,n-1);
        return nums;
    }
};

int main()
{
    vector<int> arr = {9, 4, 7, 6, 3, 1, 5};
    int n = arr.size();

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Create an instance of the Solution class
    Solution sol;
    // Function call to sort the array
    vector<int> sortedArr = sol.quickSort(arr);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
        cout << sortedArr[i] << " ";
    cout << endl;
    
    return 0;
}
