#include <iostream>
#include <vector>
using namespace std;

void sub_sequ(int i, vector<int> &temp, vector<int> &arr, int n, int s, int sum)
{
    if (i >= n)
    {
        if (s == sum)
        {
            for (auto it : temp)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    // Take arr[i]
    temp.push_back(arr[i]);
    s += arr[i];
    sub_sequ(i + 1, temp, arr, n, s, sum);

    // Don't take arr[i]
    temp.pop_back();
    s -= arr[i];
    sub_sequ(i + 1, temp, arr, n, s, sum);
}

int main()
{
    vector<int> arr = {3, 2, 1};
    int sum=3;
    // cin>>sum;
    vector<int> temp;
    sub_sequ(0, temp, arr, arr.size(), 0, sum);
    return 0;
}
