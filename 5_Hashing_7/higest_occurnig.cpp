#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map>

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
/*
vector<int> higest(vector<int> v)
{
    int hash[20000]={0};
    for(int i=0;i<v.size();i++)
    {
        hash[v[i]]++;
    }
    int  max=-1;
    int elem=v[0];
    for(int i=0;i<20000;i++)
    {
        if(hash[i]>max)
        {
            max=hash[i];
            elem=i;
        }
    }
    vector<int>ans;
    ans.push_back(max);
    ans.push_back(elem);
    return ans;
}
*/

//! Hashing 

int higest(vector<int> v)
{
    unordered_map<int,int>mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }
    int max=-1;
    int elem=0;
    for(auto x: mp)
    {
        if(x.second>max)
        {
            max=x.second;
            elem=x.first;
        }
    }
    return elem;
}



int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 3, 4, 2, 1, 0};
    int ans = higest(v);
    cout << ans << endl;
    return 0;
}