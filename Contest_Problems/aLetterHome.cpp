#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }
        int range = arr[n - 1] - arr[0];
        int check1 = s - arr[0];
        if (check1 < 0)
        {
            check1 = -(check1);
        }
        int check2 = arr[n - 1] - s;
        if (check2 < 0)
        {
            check2 = -(check2);
        }
        int mini = min(check1, check2);
        cout << (mini + range)<<endl;
    }
    return 0;
}