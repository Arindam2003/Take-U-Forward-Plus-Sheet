#include<iostream>
#include<vector>

using namespace  std;
//! My aroch better...
// int subArray(vector<int> nums)
// {
//     int n=nums.size();
//     int max = INT_MIN;
//     for(int i=0;i<n;i++)
//     {   
//         int prod=nums[i];
//         for(int j=i+1;j<n;j++)
//         {
//             prod=nums[j]*prod;
//             if(prod>max)
//             {
//                 max=prod;
//             }
//         }
//     }
//     return max;
// }

//! Optimal...Powerfull

int subArray(vector<int> nums)
{   int prefix=1;
    int sufix=1;
    int  maxi=INT_MIN;  
    int n=nums.size(); 
    for(int i=0;i<n;i++)
    {
        if(prefix==0) {
            prefix=1;
        }
        if(sufix==0)
        {
            sufix=1;
        }
        sufix=sufix*nums[i];
        prefix=prefix*nums[n-1-i];
        maxi=max(maxi,max(prefix,sufix));
    }
    return maxi;
}

int  main()
{
    vector<int>  nums={ 1, -2, 3, 4, -4, -3 };
    int max=subArray(nums);
    cout<<max;
    return 0;
    
}