#include<iostream>

using namespace std;

int main()
{
    vector<int>arr={1,2,2,1,1,3};
    sort(arr.begin(),arr.end());
    auto it=unique(arr.begin(),arr.end());
    arr.erase(it,arr.end());
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}