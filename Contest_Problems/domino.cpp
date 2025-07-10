#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<long long> S(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> S[i];
        }

        // Step 1: Make a list of all dominoes except 1 and N
        vector<long long> middleDominoes;
        for (int i = 1; i < N - 1; ++i)
        {
            middleDominoes.push_back(S[i]);
        }

        // Step 2: Sort the middle dominoes so we can try from smallest to largest
        sort(middleDominoes.begin(), middleDominoes.end());

        // Step 3: Simulate the falling sequence
        long long current = S[0]; // start with domino 1
        int count = 1;

        for (long long size : middleDominoes)
        {
            if (size <= 2 * current)
            {
                current = size;
                count++;
            }
        }

        // Try to topple the last domino (domino N)
        if (S[N - 1] <= 2 * current)
        {
            cout << count + 1 << "\n"; // include domino N
        }
        else
        {
            cout << -1 << "\n"; // can't reach domino N
        }
    }

    return 0;
}
