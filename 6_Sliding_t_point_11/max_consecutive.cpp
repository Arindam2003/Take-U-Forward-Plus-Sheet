#include<iostream>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    int k=3;    
    int lsum=0,rsum=0,maxsum=0;

    for(int i=0;i<k;i++)
    {
        lsum=lsum+arr[i];
        maxsum=lsum;
    }
    int rightindex=arr.size()-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-arr[i];
        rsum=rsum+arr[rightindex];
        rightindex--;
        maxsum=max(maxsum,lsum+rsum);
    }
    cout<<maxsum<<endl;
}