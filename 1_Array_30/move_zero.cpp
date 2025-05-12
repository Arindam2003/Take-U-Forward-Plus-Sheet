#include<iostream>
using namespace std;

//! Optimal

int main()
{
    vector<int> v={0,1,4,0,5,2};
    int n=v.size();
    int zeroidx=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            zeroidx=i;
            break;
        }
    }
    if(zeroidx==-1) return 0;
    for(int i=zeroidx+1;i<n;i++)
    {
        if(v[i]!=0)
        {
            swap(v[zeroidx],v[i]);
            zeroidx++;
        }
    }
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}