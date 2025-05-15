#include <iostream>
#include <vector>
using namespace std;

//! Brute force...
// vector<int> merge(vector<int> nums1,vector<int>nums2)
// {
//     int n=nums1.size();
//     int left=0;
//     int m=nums2.size();
//     int right=0;
//     vector<int> temp;
//     while (left<n && right<m)
//     {
//         if(nums1[left]<nums2[right])
//         {
//             temp.push_back(nums1[left]);
//             left++;
//         }
//         else{
//             temp.push_back(nums2[right]);
//             right++;
//         }
//     }
//     while(left<n)
//     {
//         temp.push_back(nums1[left]);
//         left++;
//     }
//     while(right<m)
//     {
//         temp.push_back(nums2[right]);
//         right++;
//     }
//     return temp;
// }

//! Optimal...

void merge(vector<int> nums1, vector<int> nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    int left = m - 1;
    int right = 0;
    while (left >= 0 && right < n)
    {
        if (nums1[left] > nums2[right])
        {
            swap(nums1[left], nums2[right]);
            left--, right++;
        }
        else
        {
            break;
        }
    }
    sort(nums1.begin() + 0, nums1.begin() + m);
    sort(nums2.begin(), nums2.end());
    for (int i = m; i < m + n; i++)
    {
        nums1[i] = nums2[i - m];
    }
}

int main()
{
    vector<int> nums1 = {-5, -2, 4, 5};
    vector<int> nums2 = {-3, 1, 8};
     merge(nums1, nums2);
}