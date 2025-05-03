#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> rotate90(const vector<string> &grid)
{
    int N = grid.size();
    vector<string> rotated(N, string(N, ' '));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            rotated[j][N - 1 - i] = grid[i][j];
    return rotated;
}

int countMismatches(const vector<string> &a, const vector<string> &b)
{
    int N = a.size();
    int diff = 0;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (a[i][j] != b[i][j])
                ++diff;
    return diff;
}

int main()
{
    int N;
    cin >> N;
    vector<string> S(N), T(N);
    for (int i = 0; i < N; ++i)
        cin >> S[i];
    for (int i = 0; i < N; ++i)
        cin >> T[i];

    int minOps = INT32_MAX;
    vector<string> current = S;

    for (int rot = 0; rot < 4; ++rot)
    {
        int changes = countMismatches(current, T);
        minOps = min(minOps, rot + changes); 
        current = rotate90(current);
    }

    cout << minOps << endl;
    return 0;
}
