#include<iostream>
using namespace std;
int main()
{
    int arr[5]={12,23,11,44,10};
    int n=5;
    for(int i=0;i<n-1;i++)
    {
        int count=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        if(count==0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}