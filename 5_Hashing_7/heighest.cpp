#include<iostream>

using namespace std;

int main()
{
    vector<int> arr={1,1,1,2,1,2,1,2,3,2,1};

    unordered_map<int,int>mpp;
    for(auto x: arr)
    {
        mpp[x]++;
    }
    int max=INT_MIN;
    int elem;
    for(auto it:mpp)
    {
        if(it.second>max)
        {
            max=it.second;
            elem=it.first;
        }
    }
    cout<<elem<<endl;
}