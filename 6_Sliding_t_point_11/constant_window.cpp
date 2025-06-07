#include <iostream>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 3;
    int maxsum = INT_MIN;
    for (int i = 0, j = k - 1; i < arr.size() - k + 1; i++)
    {
        j++;
        int sum = 0;
        for (int k = i; k < j; k++)
        {
            sum = sum + arr[k];
        }
        maxsum = max(maxsum, sum);
    }
    cout << maxsum << endl;
    return 0;
}