#include<iostream>

using namespace std;

int main()
{
    vector<int>v={3,2,1,0,9,4,8};
    int large = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        large = max(large, v[i]);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v[i]!=large)
        {
            int second=v[i];
            cout<<second<<endl;
            return 0;
        }
    }
}