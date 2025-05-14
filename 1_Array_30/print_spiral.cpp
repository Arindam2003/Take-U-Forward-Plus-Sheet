#include <iostream>
using namespace std;

vector<int> sprilMatrix(vector<vector<int>>matrix)
{
    int n = matrix.size();    //! row
    int m = matrix[0].size(); //! column
    int left = 0, right = m - 1;
    int top = 0, bottom = n - 1;
    vector<int> ans;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
            top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
            right--;
        
        for (int i = right; i >= left; i--)
        {
            ans.push_back(matrix[bottom][i]);
        }
            bottom--;
        for (int i = bottom; i >= top; i--)
        {
            ans.push_back(matrix[i][left]);
        }
            left++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans = sprilMatrix(matrix);
    for (auto x : ans)
    {
        cout << x << ' ';
    }
}