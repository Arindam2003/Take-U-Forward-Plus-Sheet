#include <iostream>

using namespace std;

vector<vector<int>> rotate(vector<vector<int>> matrix)
{
    int n = matrix.size();    //! row
    int m = matrix[0].size(); //! col
    vector<vector<int>> ans(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][n - 1-i] = matrix[i][j];
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
     {1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}
     };
    vector<vector<int>> ans = rotate(matrix);
    for (auto y : ans)
    {
        for (auto x : y)
        {
            cout << x << ' ';
        }
        cout << endl;
    }
}