#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class longest
{
public:
    string longest_pref(vector<string> v)
    {
        sort(v.begin(), v.end());
        string first = v[0];
        string last = v[v.size() - 1];
        int mini = min(first.size(), last.size());
        string ans = "";
        for (int i = 0; i < mini; i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans.push_back(first[i]);
        }
        return ans;
    }
};

int main()
{
    vector<string> s;
    s.push_back("flowers");
    s.push_back("flow");
    s.push_back("fly");
    s.push_back("flight");
    // for (auto v : s)
    // {
    //     cout << v << endl;
    // }
    // cout << "After sorting" << endl;
    longest longe;
    string ss = longe.longest_pref(s);
    cout << ss << endl;
}
