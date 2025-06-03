// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector <int>x ;
        int n=arr.size();
        int hash[1000000]={0};
        for(int i=0;i<n;i++)
        {
            hash[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            x.push_back(hash[i]);
        }
        return x;
    }
int main()
{
    // cout<<"Arindam"<<endl;
    vector<int> x(4);
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }
    vector<int > cap;
    cap=frequencyCount(x);
    for(auto i:cap)
    {
        cout<<i<<" ";
    }
    return 0;
}


//
