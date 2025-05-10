#include<iostream>
using namespace std;

int main()
{
    vector<int> nums={1,1,0,1,1,1,0,0,0,0,1,1};
    int n = nums.size();
    int count = 0;
    int maxc = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        if (maxc < count)
        {
            maxc = count;
        }
        if (nums[i] == 0)
        {
            count = 0;
        }
    }
    cout<<maxc<<endl;
}