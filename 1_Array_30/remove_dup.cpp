#include<iostream>
using namespace std;

int main()
{
    vector<int> v={0,0,3,3,5,6};
    int n=v.size();
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==v[i-1])
        {
            v[i-1]=v[i];
        }
    }
    for(int x:v)
    {
        cout<<x<<" ";
    }
}