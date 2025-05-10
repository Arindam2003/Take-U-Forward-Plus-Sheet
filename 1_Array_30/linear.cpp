#include<iostream>
using namespace std;

int main()
{
    vector<int> v={3,2,1,0,9};
    int target=9;
    for(int i=0;i<v.size();i++)
    {
        if(target==v[i])
        {
            cout<<i<<endl;
            return 0;
        }
    }
}