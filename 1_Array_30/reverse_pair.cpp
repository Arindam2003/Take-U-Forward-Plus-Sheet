#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high;i++)
    {
        arr[i]=temp[i-low];
    }
}
int countPair(vector<int>arr,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    int count=0;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]>2*arr[right])
        {
            right++;
        }
            count=count+(right-(mid+1));
    }
    return count;
}

int mergeSort(vector<int> &arr,int low,int high)
{
    int count=0;
    if(low>=high) return count;

    int mid = (low+high)/2;
    count += mergeSort(arr,low,mid);
    count += mergeSort(arr,mid+1,high);
    count += countPair(arr,low,mid,high);
    merge(arr,low,mid,high);
    return count;
}

int main()
{
    vector<int> nums={6,4,4,2,2};
    

    //! Brute Force...
    // int count=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(nums[i]>2*nums[j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    int count=mergeSort(nums,0,nums.size()-1);
    cout<<count<<endl;
    return 0;
}