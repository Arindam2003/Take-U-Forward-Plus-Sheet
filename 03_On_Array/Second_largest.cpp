#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int largest=0;
    for (int i=0;i<x;i++)
    {
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int num=0; //num=0
    for(int i=0;i<x;i++)
    {
        if(num<largest && arr[i]>num)
        {
            if(arr[i]<largest){
                num=arr[i];
            }
        }
    }
    if(num==0)
    {
        
        cout<<"hi";
    }
    cout<<num<<endl;
    return 0;
}