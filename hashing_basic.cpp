#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//! Heigest occurance Brute

/*
vector<int> higest(vector<int> v)
{
    int max_cnt=-1;
    int elem=v[0];
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        int max=0;
        for(int j=0;j<n;j++)
        {
            if(v[i]==v[j])
            {
                max++;
            }
        }
        if(max>max_cnt)
        {
            max_cnt=max;
            elem=v[i];
        }
    }
    return {max_cnt,elem};
}*/

//! Heigest occurance Optimal with Hashig



int main()
{
    vector<int>v={1,2,2,2,2,3,4,2,1,0};
    vector<int>ans=higest(v);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}