#include<iostream>

using namespace std;

int main()
{
    vector<int> arr={1,1,2,2,2,2,2,3,4,4,7,9,9};
    int target=2;
    auto lower=lower_bound(arr.begin(),arr.end(),target);
    auto upper=upper_bound(arr.begin(),arr.end(),target);
    int size=upper-lower;
    cout<<target<<"->"<<size<<endl;
    return 0;
}