#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int arr[10] = {1,1,1,2,3,2,2,2,4,2};

    int cnt=0; //3
    int elem; //2
    for(int i=0;i<10;i++)
    {
        if(cnt==0)
        {
            cnt++;
            elem=arr[i];
        }
        else if(elem==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int main_count=0;
    for(int i=0;i<10;i++)
    {
        if(elem==arr[i])
        {
            main_count++;
        }
    }
    cout<<elem<<" "<<main_count<<endl;
    return 0;
}
















/*
int main()
{
    int arr[10]={1,2,3,1,1,1,4,1,1,1};
    unordered_map<int,int> mpp;
    for(int i=0;i<10;i++)
    {
        mpp[arr[i]]++;  //! arr[i] -> part goes to the first int value and the ++ is goes 2nd int value...
    }

    //! Better with Hashing...

    for(auto &pair: mpp)
    {
        if(pair.second>5)
        {   
            cout<<pair.first<<endl;
            return 0;
        }
    }
    return -1;

    //! Brute Force
    // for(int i=0;i<10;i++)
    // {
    //     int cnt=0;
    //     for(int j=0;j<10;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cnt++;
    //         }
    //     }
    //     if(cnt>5)
    //     {
    //         cout<<arr[i]<<endl;
    //         return 0;
    //     }
    // }

}

*/