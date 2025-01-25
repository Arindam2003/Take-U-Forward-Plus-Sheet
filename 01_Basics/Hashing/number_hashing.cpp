#include<iostream>
using namespace std;
int main()
{
    //! Input Portion...
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    //! Hash Array for PreCompute...
    int hash[23]={0};
    for(int i=0;i<x;i++)
    {
        hash[arr[i]]+=1;
    }

    // fetch
    int number;
    cin>>number;
    cout<<hash[number]<<endl;
    return 0;
}