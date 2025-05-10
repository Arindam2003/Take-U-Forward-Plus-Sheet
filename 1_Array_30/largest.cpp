#include<iostream>
using namespace std;

int main()
{
    vector<int> v={3,4,5,0,2,1};
    int maxele=v[0];
    for(int i=1;i<v.size();i++)
    {
        maxele=max(maxele,v[i]);
    }
    cout<<maxele<<endl;
    return 0;
}