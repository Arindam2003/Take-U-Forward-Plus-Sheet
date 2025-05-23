#include<iostream>
#include<vector>
using namespace std;

void sub_sequ(int i,vector<int> &temp,vector<int> &arr,int n)
{
    
    if(i>=n){
        for(auto it:temp)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    temp.push_back(arr[i]);
    sub_sequ(i+1,temp,arr,n);
    temp.pop_back();
    sub_sequ(i+1,temp,arr,n);
}

int main()
{
    vector<int> arr={3,2,1};
    vector<int> temp;
    sub_sequ(0,temp,arr,3);
    return 0;
}