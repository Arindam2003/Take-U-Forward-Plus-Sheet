#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long nCr(int n, int r)
{
    if (r > n - r)
        r = n - r;

    long long res = 1;
    for (int i = 0; i < r; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    int row;
    cin >> row; //! 4
    vector<vector<int>> ans;
    
    for(int i=0;i<row;i++){
        vector<int> v;
        for (int col = 0; col <= i; col++)
        {
            int ans = nCr(i, col);
            v.push_back(ans);
        }
        ans.push_back(v);
    }
    
    for(auto x: ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout<<endl;
    } 
    return 0;
}
