#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long nCr(int n, int r)
{
    if (r > n - r)
        r = n - r; 

    long long res = 1;
    for (int i = 0; i < r; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int  main()
{
    int row;
    cin>>row;
    vector<int> v;
    for(int col=0;col<row;col++)
    {
        int ans= nCr(row-1,col);
        v.push_back(ans);
    }
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}