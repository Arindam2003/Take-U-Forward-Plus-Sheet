#include<iostream>

using namespace std;

bool comparator(pair<char, int> p1, pair<char, int> p2)
{
    if (p1.second > p2.second)
        return true; // freq desc
    if (p1.second < p2.second)
        return false;
    return p1.first < p2.first; // char asc
}

int main()
{
    string s="tree";
    unordered_map<char, int> mpp;
    for (char c : s)
    {
        mpp[c]++;
    }

    vector<pair<char, int>> newMap(mpp.begin(), mpp.end());

    // Sorting using lambda comparator
    sort(newMap.begin(), newMap.end(), comparator);

    vector<char> ans;
    for (auto &p : newMap)
    {
        ans.push_back((p.first)); // Efficient repeat without loop
    }
    for(auto x:ans){
        cout<<x;
    }
}