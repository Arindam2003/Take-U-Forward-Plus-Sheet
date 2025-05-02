#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[]={10,23,23,1,2,21,1,1,2};  //9
    map<int,int>mp;
    for(int i=0;i<9;i++)
    {
        mp[arr[i]]++;
    }
    cout<<mp[1]<<endl;
    return 0;
}