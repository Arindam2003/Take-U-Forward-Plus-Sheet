#include<iostream>

using namespace std;

long long int merge(vector<int> &v, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;


    long long int count=0;

    while (left <= mid && right <= high)
    {
        if (v[left] <= v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            count=count+(mid-left+1);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(v[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        v[i] = temp[i - low];
    }
    return count;
}

long long int merge_sort(vector<int> &v, int low, int high)
{
    long long int count=0;
    if (low < high)
    {
    int mid = (low + high) / 2;
    count=count+merge_sort(v, low, mid);
    count=count+merge_sort(v, mid + 1, high);
    count=count+merge(v, low, mid, high);
    }
    return count;
}

int main()
{
    vector<int> nums = { 2, 3, 7, 1, 3, 5 };
    //! Brute
    // int count=0;
    // for(int i=0;i<nums.size();i++)
    // {
    //     for(int j=0;j<nums.size();j++)
    //     {
    //         if(nums[i]>nums[j] && i<j)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<endl;
    long long result=merge_sort(nums,0,5);
    cout<<result<<endl;
    return 0;
}